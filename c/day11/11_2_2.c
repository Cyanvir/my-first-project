//指针数组，就是指针类型的数组
#include <stdio.h>
 
#define MAX 3  // 替换const int MAX = 3; （#define是编译时常量） C 语言中const int的 “常量性质” 和数组长度的要求不匹

int main ()
{
   int  var[] = {10, 100, 200};
   int i, *ptr[MAX];
 
   for ( i = 0; i < MAX; i++)
   {
      ptr[i] = &var[i]; /* 赋值为整数的地址 */
   }
   //做到这里的时候，ptr内部的元素已经和var的一样了
   for ( i = 0; i < MAX; i++)
   {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
   }
    for ( i = 0; i < MAX; i++)
   {
      printf("Value of var[%d] = %d\n", i, var[i] );
   }
   return 0;
}