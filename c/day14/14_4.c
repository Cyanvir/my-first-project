// 简易通讯录 编写一个简易通讯录程序，使用结构体数组存储联系人信息
// （姓名、电话），实现添加和显示功能：
#include <stdio.h>
#include <string.h>
#define Max_contact 50
typedef struct{
    char name[50];
    char number[50];
} Contact;
Contact contactmax[Max_contact];
int count=0;

void add(){
    if(count>Max_contact){
        printf("通讯录已满");
    }
    printf("请输入姓名：\n");
    scanf("%s",contactmax[count].name);
    printf("请输入电话：\n");
    scanf("%s",contactmax[count].number);
    count++;
    printf("添加成功！");
}
 
void show(){
    printf("\n通讯录列表:\n");
    for(int i=0;i<count;i++){
        printf("%d:%s-%s\n",i+1,contactmax[i].name,contactmax[i].number);
    }
}

int main(){
    int choice;
    while(1){
        printf("\n1.输入\n2.输出\n3.退出\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:add();break;
            case 2:show();break;
            case 3:return 0;
            default:printf("无效选择");
        }
    }
    return 0;
}