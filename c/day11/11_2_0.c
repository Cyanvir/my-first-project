#include <stdio.h>
 
int main ()
{
    int var_runoob = 10;
    int *p;              // 定义指针变量
    p = &var_runoob;
 
   printf("p 变量储存的地址： %p\n", p);
   printf("var_runoob 变量的地址： %p\n",&var_runoob);
   printf("*p变量的值：  %d\n",*p);
   int *prt=NULL;
   printf("prt 的地址为： %p\n",prt);
   if(!prt){
    printf("这是个空指针");
   }else{
    printf("这不是个空指针");
   }
   return 0;
}