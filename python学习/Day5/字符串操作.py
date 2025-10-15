print("\a")
#学习转义字符
s = input("请输入一句话: ")
print("长度:", len(s))
print("大写:", s.upper())
print("替换:", s.replace(" ", "_"))
print("小写:",s.lower())  # 输出 '
s = "Python"
print(s[0:3])   # 输出 'Pyt'（取索引0、1、2的字符）
print(s[2:])    # 输出 'thon'（从索引2取到末尾）
print(s[::2])   # 输出 'Pto'（步长为2，隔一个取一个）
print(s[::-1])  # 输出 'nohtyP'（倒序取，实现字符串反转）
s = "hello world"
print(s.replace("l", "x"))    # 输出 'hexxo worxd'（替换所有'l'）
print(s.replace("l", "x", 2)) # 输出 'hexxo world'（只替换前2个'l'）