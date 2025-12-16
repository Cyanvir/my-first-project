// 结构体变量的初始化
// 和其它类型变量一样，对结构体变量可以在定义时指定初始值。
#include <stdio.h>
struct Books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
}book ={"C语言","RUNOOB","编程语言",123456};
int main(){
    printf("title : %s\nauthor: %s \nsubject: %s \nbood_id: %d\n",book.title,book.author,book.subject,book.book_id);
    return 0;
}
