#include <stdio.h>
struct Student {
    char name[20];
    int age;
};

int main() {
    struct Student s = {"张三", 20};
    FILE *fp = fopen("student.bin", "wb"); // 二进制写
    fwrite(&s, sizeof(struct Student), 1, fp); // 写1个结构体
// 关键函数fwrite：二进制写入数据，参数顺序是「数据地址 → 单个数据大小 → 数据个数 → 文件指针」。
// &s：结构体变量s的内存地址（fwrite需要知道从哪里读数据）；
// sizeof(struct Student)：单个Student结构体的大小（告诉fwrite每次读多少字节）；
// 1：要写入的结构体个数（这里只写 1 个）；
// fp：要写入的文件指针（指向student.bin）；
// 本质：把s在内存中的 24 字节（假设）原封不动写入文件，包括name数组中未使用的字节（比如 “张三” 只占 6 字节，剩下 14 字节是随机值，但不影响读取）。
    fclose(fp);

    // 读结构体
    struct Student s2;
    fp = fopen("student.bin", "rb"); // 二进制读
    fread(&s2, sizeof(struct Student), 1, fp);
    printf("姓名：%s，年龄：%d\n", s2.name, s2.age); // 输出“姓名：张三，年龄：20”
    fclose(fp);
    return 0;
}