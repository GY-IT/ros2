import rclpy
from rclpy.node import Node
# 1. 导入消息类型
from std_msgs.msg import String,UInt32
#从村庄接口服务类中导入卖小说服务
from village_interfaces.srv import SellNovel
#创建队列
from queue import Queue,LifoQueue,PriorityQueue
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.callback_groups import CallbackGroup



class createNode(Node):
    """
    对象编写
    """
    def __init__(self,name):
        super().__init__(name)
        self.get_logger().info("大家好，我是%s,我是一名订阅者！" % name)
        # 创建队列
        self.queue_list = Queue(maxsize=0)
        self.msg = ""
        # 2.订阅李四发布的文章
        self.sub_wangwu = self.create_subscription(String,"sexy_girl", self.recv_msg_callback, 10) 
        #3. 创建金钱发布者
        self.pub_money = self.create_publisher(UInt32,"sexy_girl_money", 10) 
        # 声明回调组
        # self.sell_novel_callback_group = ThrottledCallbackGroup(self)
        self.sell_novel_callback_group = MutuallyExclusiveCallbackGroup()
        self.sell_service = self.create_service(SellNovel,"sell_novel",self.sell_novel_callback,callback_group=self.sell_novel_callback_group)

    def recv_msg_callback(self,msg):
        """
        3. 获取订阅老四的数据
        """
        self.msg = msg.data
        self.get_logger().info('穷汉王五：我已经收到了李四的稿子，%s' % self.msg)
        """
        4.发布金钱消息给李四
        """
        money = UInt32()
        money.data = 10
        self.pub_money.publish(money)  #将金钱发给李四
        self.queue_list.put(self.msg)

    # 买书请求回调函数
    def sell_novel_callback(self,request, response):
        # 判断当前书的数量章节够不够，不够就要攒书，在返回
        # 等待queue_list里面书够 等待就会让当前线程阻塞
        self.get_logger().info('收到一个买书的请求，一共给了%d 元' % request.money)
        # 应给小说数量，一块钱一章
        novelsNum = request.money*1
        # 判断当前书库里书的数量是否满足张三要买的数量，不够则进入等待函数
        if self.queue_list._qsize() < novelsNum:
            self.get_logger().info('当前艳娘传奇章节存量为%d：不能满足需求,开始等待' % self.queue_list._qsize())
            # 设置rate周期为1s，代表1s检查一次
            rate = self.create_rate(1)
            while (self.queue_list._qsize()<novelsNum):
                '''
                self.get_logger().info('设置rate周期为1s，代表1s检查一次 %s' % rclpy.ok())
                if rclpy.ok() == False:
                    self.get_logger().info('程序被终止了')
                    return'''
                self.get_logger().info('等待中，目前已有%d章，还差%d章' % (self.queue_list._qsize(),novelsNum-self.queue_list._qsize()))
               # rclpy.spin_once(self)
                rate.sleep()
        self.get_logger().info('当前艳娘传奇章节存量为%d：已经满足需求' % self.queue_list._qsize())

        for novel in self.queue_list:        
            print ('当前小说: %s'% novel)
            response.novels.append(self.queue_list.get())
        return response


def main(args=None):
    """
    王五订阅小说给李四稿费
    """
    rclpy.init(args=args) # 初始化rclpy
    node = createNode("wang5")  # 新建一个节点
    #rclpy.Executor.add_node(node).spin()  rclcpp::executors::MultiThreadedExecutor exector;
    executor = MultiThreadedExecutor()
    #executor = PriorityExecutor()
    executor.add_node(node)
    executor.spin()
    #rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # 关闭rclpy