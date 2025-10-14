i=1
while i<=9:
    j = 1
    while j<=i :
        print(f"{j}*{i}={i*j}",end="\t")
        j+=1
    print()
    i+=1

for x in range(1,10):
    for y in range(1,x+1):
        print(f"{y}*{x}={y*x}",end=" ")
    print()