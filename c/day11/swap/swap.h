#include <stdio.h>
// 自定义头文件的核心作用是存放函数声明、宏定义等 “公共接口”
void swap(int *a, int *b);
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}