#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int target=rand()%100+1;
    int number;
    int count=0;
    do{
        printf("请输入你猜的数");
        scanf("%d",&number);
        if(number==target){
            printf("你猜对了");
        }else if(number>target){
            printf("你猜大了");
        }else{
            printf("你猜小了");
        }
        count++;
    }while(number!=target);
    printf("你一共猜了%d次",count);
    return 0;
}