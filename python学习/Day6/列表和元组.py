nums = []
for _ in range(5):
 n= int(input("请输入数字: "))
nums.append(n)
print("最大值:", max(nums))
print("最小值:", min(nums))
print("倒序:", list(reversed(nums)))
print(nums)