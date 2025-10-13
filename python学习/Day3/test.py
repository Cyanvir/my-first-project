a="11"
print(type(a))
int(a)
print(type(int(a)))
b=1.9
print(type(b),b)
#要输出新东西就要给老东西赋值
b=int(b)
print(type(b),b)
#这里就说明了python变化数据类型不是四舍五入的，是直接舍去结尾小数
#也就是所谓的丢失精度

name="\""
print(name)
it="""you 
are
clever
"""
print(it)

print("%s %d"%(it,b))
name="me%d" %b
print(name)

num=1.22
#如果要print 不换行
print("%7.1f" % num, end='')
print("%5d" % num)
print("%13.7f" % num)
#注意这边的宽度设定是包含整个数字的，点也算作一
#制表符\t
print("ni\thao")
print("xiang\tni")