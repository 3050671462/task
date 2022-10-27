# Task 2 Summary
## 1.How to start
 先在创建好的launch文件夹下
 ```
 touch pubsub.launch
 ```
 输入以下内容
 ```
 <launch>
    <node name="" pkg="" type="" output="screen"/>
    <node name="" pkg="" type="" output="screen"/>
</launch>
 ```
 注意:
 node name中为运行时为节点指派的名称

 pkg中为节点所在的包名

 type中为可执行文件的名称

 output="screen"使得运行信息输出转储到当前终端上

 roslaunch可不经过roscore而直接调用,同时会自动调用roscore
 ```
 roslaunch [pkg_name] [launch_file_name]
 roslaunch test2 pubsub.launch
 ```
 或者
 ```
 roscore
 roslaunch test2 pubsub.launch
 ```
## 2.Problems and Solutions
 注意:第一条操作不经过roscore直接调用launch,会使得roscore与roslaunch绑定在一起.若关闭该launch,会导致其他不在launch作用范围内且正在运行的node停止运行.
 
 所以,我们最好使用第二条操作.
## 3.Wait for Improvement
 launch其他标签的使用
## 4.Assessment
 不光看roswiki官方教程,还可以bing其他大牛的讲解

