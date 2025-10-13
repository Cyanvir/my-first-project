#布尔类型
False
True
#可以用比较运算符得到结果
#不要忘记if的:
#else与if同级时要注意缩进
# age=int(input("你几岁了："))
# if age>18:
#     print("你是个老头")
# else:
#     print("未成年玩什么电脑")
#多个判断时要注意判断是互斥且有顺序的
score=int(input("你的成绩是："))
if score>=90:
    print("优秀")
elif score>=70:
    print("良好")
elif score>=60:
    print("及格")
else:
    print("不及格")

#缩进是看if，else归属的重点