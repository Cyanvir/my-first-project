//编写程序，动态分配数组，输入 n 个数字，计算平均值：
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("请输入数字个数：");
    scanf("%d",&n);
    int *arr =(int *)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("内存分配失败\n");
        return 1;
    }
    printf("请输入%d个数字：\n",n);
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("平均值：%.2f\n",sum/(double)n);
    free(arr);
    return 0;
}