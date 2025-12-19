#include <stdio.h>
struct Student {
    char name[20];
    int age;
};

int main() {
    struct Student s = {"张三", 20};
    FILE *fp = fopen("student.bin", "wb"); // 二进制写
    fwrite(&s, sizeof(struct Student), 1, fp); // 写1个结构体
    fclose(fp);

    // 读结构体
    struct Student s2;
    fp = fopen("student.bin", "rb"); // 二进制读
    fread(&s2, sizeof(struct Student), 1, fp);
    printf("姓名：%s，年龄：%d\n", s2.name, s2.age); // 输出“姓名：张三，年龄：20”
    fclose(fp);
    return 0;
}