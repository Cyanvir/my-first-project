#include <stdio.h>
#include <string.h>
 
int main ()
{
   char str1[14] = "runoob";
   char str2[14] = "google";
   char str3[14];
   int  len ;
 
   /* 复制 str1 到 str3 */
   strcpy(str3,str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );
 
   /* 连接 str1 和 str2 */
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );
 
   /* 连接后，str1 的总长度 */
   len = strlen(str1);
   printf("strlen(str1) :  %d\n", len );

   /* 4. 比较字符串（strcmp） */
   printf("\n--- strcmp的使用 ---\n");
   // 比较str3（"runoob"）和"runoob"（完全相同）
   int cmp1 = strcmp(str3, "runoob");
   printf("strcmp(str3, \"runoob\")：%d（结果为0 → 两个字符串相等）\n", cmp1);

   // 比较str3（"runoob"）和str2（"google"）
   int cmp2 = strcmp(str3, str2);
   printf("strcmp(str3, str2)：%d（结果>0 → str3大于str2）\n", cmp2);

   // 比较str3（"runoob"）和"runooba"（前6位相同，str3更短）
   int cmp3 = strcmp(str3, "runooba");
   printf("strcmp(str3, \"runooba\")：%d（结果<0 → str3小于\"runooba\"）\n", cmp3);


   /* 5. 查找字符在字符串中的位置（strchr） */
   printf("\n--- strchr的使用 ---\n");
   char target_char = 'o';  // 要查找的字符
   // 在str1（"runoobgoogle"）中找第一个'o'
   char *chr_ptr = strchr(str1, target_char);
   if (chr_ptr != NULL) {  // 找到字符的情况
       int index = chr_ptr - str1;  // 计算字符在str1中的索引（指针减基地址）
       printf("在str1（\"%s\"）中找到第一个'%c'：索引%d，从该位置开始的字符串：%s\n",
              str1, target_char, index, chr_ptr);
   } else {  // 没找到字符的情况
       printf("在str1中未找到字符'%c'\n", target_char);
   }


   /* 6. 查找子字符串在字符串中的位置（strstr） */
   printf("\n--- strstr的使用 ---\n");
   // 在str1（"runoobgoogle"）中找str2（"google"）
   char *str_ptr = strstr(str1, str2);
   if (str_ptr != NULL) {  // 找到子字符串的情况
       int index = str_ptr - str1;  // 计算子字符串在str1中的起始索引
       printf("在str1（\"%s\"）中找到str2（\"%s\"）：索引%d，从该位置开始的字符串：%s\n",
              str1, str2, index, str_ptr);
   } else {  // 没找到子字符串的情况
       printf("在str1中未找到子字符串str2\n");
   }

 
   return 0;
}
