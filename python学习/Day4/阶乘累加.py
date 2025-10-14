n = int(input())
sum_fact = 0
fact = 1
for i in range(1, n + 1):
    fact *= i  # 计算当前i的阶乘
    sum_fact += fact  # 累加到总和
print(sum_fact)