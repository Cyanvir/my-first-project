// 编写 swap() 函数，使用指针交换两个变量的值
#include <stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    printf("请输入你要交换的两个数：");
    int x,y;
    scanf("%d%d",&x,&y);
    printf("初始x=%d,y=%d",x,y);
    swap(&x,&y);
    printf("交换后的值为：x=%d,y=%d",x,y);
    return 0;
}
// #include <stdio.h>
// void swap(int *a, int *b) {
// int temp = *a;
// *a = *b;
// *b = temp;
// }
// int main() {
// int x = 10, y = 20;
// printf(" 交换前: x = %d, y = %d\n", x, y);
// swap(&x, &y);
// printf(" 交换后: x = %d, y = %d\n", x, y);
// return 0;
//}
