CC = gcc
CFLAGS = -Wall -g
calculator: main.o math_utils.o
	$(CC) $(CFLAGS) -o calculator main.o math_utils.o
main.o: main.c math_utils.h
	$(CC) $(CFLAGS) -c main.c
math_utils.o: math_utils.c math_utils.h
	$(CC) $(CFLAGS) -c math_utils.c
clean:
	del /Q /F *.o calculator.exe

#上面是在ps里面的术语

#在linux系统里面的术语
#clean:
#rm ‐f *.o calculator

#规范进阶版本
## 编译器和编译选项（变量）
#CC = gcc
#CFLAGS = -Wall -g

## 伪目标：标记clean不是文件
#.PHONY: clean

## 最终目标：calculator（用自动变量$@、$^）
#calculator: main.o math_utils.o
#	$(CC) $(CFLAGS) -o $@ $^  # $@=calculator，$^=main.o math_utils.o

## 模式规则：所有.o依赖对应的.c和头文件（用$@、$<）
#%.o: %.c math_utils.h
#	$(CC) $(CFLAGS) -c $< -o $@  # $<=对应的.c文件，$@=对应的.o文件

## 伪目标clean（用Windows的del命令）
#clean:
#	del /Q /F *.o calculator.exe
