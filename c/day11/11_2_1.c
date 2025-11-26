#include <stdio.h>
#include <string.h>
const int MAX = 3;
// 递增结构体指针
struct Point {
    int x;
    int y;
};
int main ()
{
   // 定义一个整数数组
   int var[] = {10, 100, 200};
   // 定义一个整数变量 i 和一个整数指针 ptr
   int i, *ptr;
   // 将指针 ptr 指向数组 var 的起始地址
   //所以这个叫数组指针，就是指向数组的指针
   ptr = var;
//    int *ptr = &arr[4];如果是递减就要把最后一位地址赋值给指针
   // 循环遍历数组
   for ( i = 0; i < MAX; i++)
   {
      // 打印当前指针 ptr 所指向的地址
      printf("存储地址：var[%d] = %p\n", i, ptr );
      // 打印当前指针 ptr 所指向地址的值
      printf("存储值：var[%d] = %d\n", i, *ptr );
 
      // 将指针 ptr 移动到下一个数组元素的位置
      ptr++;
   }
    char str[] = "Hello";
    char *ptr1 = str;  // 指针指向字符串的第一个字符
    printf("字符为：");
    for(int i=0;i<strlen(str);i++){
      printf(" %c", *ptr1++); 
    }
    struct Point points[] = {{1, 2}, {3, 4}, {5, 6}};
    struct Point *ptr2 = points;  // 指针指向结构体数组的第一个元素

    printf("\n初始点: (%d, %d)\n", ptr2->x, ptr2->y);  // 输出 (1, 2)

    ptr2++;  // 递增指针，使其指向下一个结构体
    printf("递增后点: (%d, %d)\n", ptr2->x, ptr2->y);  // 输出 (3, 4)
    //遍历数组并比较指针
    int arr[] = {10, 20, 30, 40, 50};
    int *start = arr;           // 指向数组的第一个元素
    int *end = &arr[4];         // 指向数组的最后一个元素
    int *ptr3;

    for (ptr3 = start; ptr3 <= end; ptr3++) {
        printf("当前指针指向的值: %d\n", *ptr3);
    }
   return 0;
}