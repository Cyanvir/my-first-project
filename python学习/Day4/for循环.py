#for 临时变量 in 待处理数据集：
      #循环满足条件时执行的代码
line="nihao"
for x in line:
    print(x)
#依次取出，遍历
#无法定义循环条件，只能被动取出数据处理
#序列类型
#内容可以一个个依次取出（字符串，列表，元组等）
#range 获得数字序列
#想要访问临时变量就提前定义
#不包含自己本身 eg.range(5),不包含5
i = 0
for i in range(5):
    print(i)
print(i)
#range(5,10)不包含10，但包含5
for y in range(5,10):
    print (y)
#range(5,10,2) 步长为2
for z in range(5,10,2):
    print(z)
total=0
for t in range(101):
    if t%2==0:
        total+=t
print(total)
#continue本次循环结束，继续下一回合
#break直接结束整个循环
#二者都只对自己所在的循环起作用