# Task 1 Summary
## 1.How to start
 首先，在我们编写完消息的发布者和订阅者之后(包括cmake中的修改),在workplace中初始化catkin
 ```
 cd catkin_ws
 catkin_make
 ```
 配置成功之后,运行roscore
 ```
 roscore
 ```
 打开新的终端,运行消息发布者节点
 ```
 rosrun test2 Publisher
 ```
 打开新的终端,运行消息订阅者节点
 ```
 rosrun test2 Subscriber
 ```
 注意:上文中`catkin_ws,test2`分别为个人的`[workplace_name]`与`[package_name]`,实际应用中应根据个人需求更改

## 2.Problems and Solutions
 1.`catkin_make`时可能报错,终端中会详细说明报错点,目前仅遇到过因单词拼写产生的报错

 解决:对照报错说明修改对应文件

 2.`catkin_make`前应注意是否修改节点名称或其他信息?若修改,也应在`CMakeList.txt`中保持对应信息一致.
## 3.Wait for Improvement
 1.参考task2,可知若需要同时启动多个节点,需打开多个终端的方式过于繁琐

## 4.Assessment
 1.减少拼写原因产生的报错
 
 2.理解各个节点之间的关系以及如何建立节点之间的联系

