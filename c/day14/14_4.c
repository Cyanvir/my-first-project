// 简易通讯录 编写一个简易通讯录程序，使用结构体数组存储联系人信息
// （姓名、电话），实现添加和显示功能：
#include <stdio.h>
#include <string.h>
#define MAX_CONTACTS 100
typedef struct {
    char name[50];
    char phone[20];
} Contact;
Contact contacts[MAX_CONTACTS];
int count = 0;
void addContact() {
    if(count >= MAX_CONTACTS) {
        printf(" 通讯录已满\n");
        return;
    }
    printf(" 请输入姓名: ");
    scanf("%s", contacts[count].name);
    printf(" 请输入电话: ");
    scanf("%s", contacts[count].phone);
    count++;
    printf(" 添加成功\n");
}
void showContacts() {
    printf("\n通讯录列表:\n");
    for(int i = 0; i < count; i++) {
        printf("%d. %s ‐ %s\n", i+1, contacts[i].name, contacts[i].phone);
    }
}
int main() {
    int choice;
    while(1) {
        printf("\n1. 添加联系人\n2. 显示所有联系人\n3. 退出\n请选择: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addContact(); break;
            case 2: showContacts(); break;
            case 3: return 0;
            default: printf(" 无效选择\n");
        }
    }
    return 0;
}