all=10000
import random
for i in range(1,21):
    num = random.randint(1,10)
    if num<5:
        print(f"员工{i}，绩效分{num},低于5，不发工资，下一位")
    else:
        all-=1000
        if all>=0:
            print(f"向员工{i}发放工资1000元，账号余额还剩余{all}元")
        else:
            print("工资发完了，下个月领取吧。")
            break
