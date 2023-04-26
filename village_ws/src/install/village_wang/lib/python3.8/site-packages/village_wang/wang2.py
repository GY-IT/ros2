#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String, UInt32
from village_interfaces.srv import SellNovel
#创建队列
from queue import Queue,LifoQueue,PriorityQueue
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.callback_groups import CallbackGroup


class SingleDogNode(Node):
    """
    创建一个作家节点，并在初始化时输出一个话
    """
    def __init__(self,name):
        super().__init__(name)
        self.get_logger().info("大家好，我是单身狗%s" % name)
        # 声明参数,参数名字，默认值
        self.declare_parameter("novel_price",1)

        # 创建并初始化订阅者成员属性
        self.novel = self.create_subscription(String,"sexy_girl",self.novels_callback,10)

        # 创建并初始化发布者成员属性
        self.pub_money = self.create_publisher(UInt32,"sexy_girl_money", 10)

        #书库
        self.queue_list = Queue(maxsize=0)

        # 创建并初始化声明回调组
        self.sell_novel_callback_group = MutuallyExclusiveCallbackGroup()
        self.sell_service = self.create_service(SellNovel, "sell_novel", self.sell_novels_callback, 
                                                callback_group=self.sell_novel_callback_group)

    def novels_callback(self, infor):
        money = UInt32()
        money.data = 10
        self.pub_money.publish(money)  #将money内容发布出去
        self.msg = infor.data
        self.get_logger().info("朕已阅：'%s'" % self.msg)
        self.queue_list.put(self.msg)

    def sell_novels_callback(self, request, response):
        self.get_logger().info("收到一个买书请求，一共给了%d钱" % request.money)

        #应给小说数量，一块钱一章  修改小说价格
        Num = request.money*self.get_parameter('novel_price').get_parameter_value().integer_value
        if self.queue_list.qsize() < Num:
            self.get_logger().info('当前艳娘传奇章节存量为%d：不能满足需求,开始等待' % self.queue_list.qsize())
            rate = self.create_rate(1)
            while(self.queue_list.qsize() < Num):
                self.get_logger().info('等待中，目前已有%d章，还差%d章' % (self.queue_list.qsize(), Num - self.queue_list.qsize()))
                rate.sleep()
        self.get_logger().info('当前艳娘传奇章节存量为%d：已经满足需求' % self.queue_list.qsize())
        for i in range(Num):        
           # self.get_logger().info('当前小说: %s'% novel)
            response.novels.append(self.queue_list.get())
        return response

    
def main(args=None):
    """
    ros2运行该节点的入口函数
    1. 导入库文件
    2. 初始化客户端库
    3. 新建节点
    4. spin循环节点
    5. 关闭客户端库
    """
    rclpy.init(args=args) # 初始化rclpy
    node = SingleDogNode("wang2")  # 新建一个节点
    executor = MultiThreadedExecutor()
    #executor = PriorityExecutor()
    executor.add_node(node)
    executor.spin()
    #rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # 关闭rclpy
