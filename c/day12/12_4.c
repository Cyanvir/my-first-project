// 编写函数 findMax(int *arr, int size)，使用指针找出数组中的最大值：
#include <stdio.h>
int findMax(int *arr,int size){
    int max=arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int num[]={5,8,9,6,4,7,3};
    int size=sizeof(num)/sizeof(num[0]);
    printf("max=%d\n",findMax(num,size));

}