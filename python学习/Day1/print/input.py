name=input("Enter your name:") #标准赋值语句，可以直接把要输出的写出来
print(name)
print(f"你好，{name}！欢迎学习Python！") #f 格式化字符串字面量
print("你好，%s！欢迎学习Python！"% name)#不同的输出字面量的方法
print("你好，",name,"!欢迎学习Python！")
print("你好，"+name+"!欢迎学习Python！")
#逗号 , 分隔参数：print 自动在参数间加空格。
#加号 + 拼接字符串：直接 “无缝” 连接字符串，无额外空格。