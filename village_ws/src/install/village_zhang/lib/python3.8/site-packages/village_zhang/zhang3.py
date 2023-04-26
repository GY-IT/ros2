#!/usr/bin/env python3
from unittest import result
import rclpy
from rclpy.node import Node
from std_msgs.msg import String, UInt32
from village_interfaces.srv import SellNovel

class PoorManNode(Node):
    def __init__(self,name):
        super().__init__(name)
        self.get_logger().info("大家好，我是得了穷病的%s." % name)

        #在__init__函数中创建一个服务的客户端
        self.novel_client = self.create_client(SellNovel, "sell_novel")

    def buy_novels(self):
        self.get_logger().info("买小说去喽")
        while not self.novel_client.wait_for_service(1.0):
            self.get_logger().warn("等待服务端上线中")
        request = SellNovel.Request()
        request.money = 2
        self.novel_client.call_async(request).add_done_callback(self.buy_novels_callback)


    def buy_novels_callback(self, response):
        result = response.result()
        self.get_logger().info("收到%d章的小说，现在开始按章节开读" % 2)    
        for novel in result.novels:
            self.get_logger().info("%s" % novel)
        self.get_logger().info("小说读完了，好刺激，写的真不错，好期待下面的章节呀！")


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
    node = PoorManNode("zhang3")  # 新建一个节点
    node.buy_novels()
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # 关闭rclpy
