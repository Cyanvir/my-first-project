//定义学生结构体，输入多个学生信息并显示：
#include <stdio.h>
typedef struct
{
    char name[50];
    int id;
    float score;
} Student;
int main() {
    Student students[3];
    printf(" 请输入 3 个学生的信息:\n");
    for(int i = 0; i < 3; i++) {
        printf(" 学生 %d ‐ 姓名: ", i+1);
        scanf("%s", students[i].name);
        printf(" 学号: ");
        scanf("%d", &students[i].id);
        printf(" 成绩: ");
        scanf("%f", &students[i].score);
    }
    printf("\n学生信息列表:\n");
    for(int i = 0; i < 3; i++) {
        printf("%s (学号: %d) ‐ 成绩: %.2f\n",
        students[i].name, students[i].id, students[i].score);
    }
return 0;
}
