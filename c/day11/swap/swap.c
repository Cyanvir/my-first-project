#include <stdio.h>
#include "swap.h"
int main(){
    printf("请输入你要交换的两个数：");
    int x,y;
    scanf("%d%d",&x,&y);
    printf("初始x=%d,y=%d",x,y);
    swap(&x,&y);
    printf("交换后的值为：x=%d,y=%d",x,y);
    return 0;
}