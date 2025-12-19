//写程序，将学生成绩保存到文件，然后读取并显示：
#include <stdio.h>
int main() {
// 写入文件
    FILE *fp = fopen("scores.txt", "w");
    if(fp == NULL) {
        printf(" 文件打开失败\n");
        return 1;
    }
    fprintf(fp, " 张三 85\n");
    fprintf(fp, " 李四 90\n");
    fprintf(fp, " 王五 78\n");
    fclose(fp);
    // 读取文件
    fp = fopen("scores.txt", "r");
    if(fp == NULL) {
        printf(" 文件打开失败\n");
        return 1;
    }
    char name[50];
    int score;
    printf(" 学生成绩:\n");
    while(fscanf(fp, "%s %d", name, &score) != EOF) {
        printf("%s: %d\n", name, score);
    }
    fclose(fp);
    return 0;
}
