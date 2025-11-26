// #include <stdio.h>
// #include <string.h>
// int main() {
// char str[100];
// printf(" 请输入一个字符串: ");
// fgets(str, sizeof(str), stdin);
// // fgets 是安全的字符串读取函数，作用是从输入流中读取字符串到字符数组 str 中：
// // 去掉换行符
// str[strcspn(str, "\n")] = '\0';
// int len = strlen(str);
// printf(" 反转后: ");
// for(int i = len - 1; i >= 0; i--) {
// printf("%c", str[i]);
// }
// printf("\n");
// return 0;
// }
// 编写程序，输入一个字符串，将其反转后输出：
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("请输入一个字符串");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    printf("反转后：");
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;

}