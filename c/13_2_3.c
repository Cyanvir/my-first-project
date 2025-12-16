#include <stdio.h>
#include <string.h>
 #define TRUE  1
 #define FALSE 0
typedef struct Books //必须带结构体标签 ——结构体需要 “自引用”（比如定义链表节点、树节点等数据结构）。
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} Book;
 
int main( )
{
// // 写法1：用原生名称（完整写法，兼容C语言所有标准）
// struct Books book1;

// // 写法2：用别名（简化写法，更简洁）
// Book book2;  // 这就是你代码里用的方式
   Book book;
 
   strcpy( book.title, "C 教程");
   strcpy( book.author, "Runoob"); 
   strcpy( book.subject, "编程语言");
   book.book_id = 12345;
 
   printf( "书标题 : %s\n", book.title);
   printf( "书作者 : %s\n", book.author);
   printf( "书类目 : %s\n", book.subject);
   printf( "书 ID : %d\n", book.book_id);

   printf( "TRUE 的值: %d\n", TRUE);
   printf( "FALSE 的值: %d\n", FALSE);
 
   return 0;
}
//不加 Books：简化写法，适合简单场景（无需自引用），只能用别名 Book 操作；
//加 Books：保留原生类型名，支持自引用，兼容更多场景，定义变量更灵活。