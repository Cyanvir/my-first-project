#include "file_utils.h"
#include "student.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

// 保存学生信息到文件
int saveToFile(StudentManager *mgr, const char *filename) {
    // 先创建data目录（Windows下用mkdir，Linux下用mkdir -p）
    #ifdef _WIN32
        system("mkdir data 2>nul"); // Windows忽略已存在的错误
    #else
        system("mkdir -p data"); // Linux/macOS
    #endif

    // 打开文件（写入模式，覆盖原有内容）
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        printf(" 错误：无法打开文件%s！\n", filename);
        return 0;
    }
    // 写入学生数量
    fprintf(fp, "%d\n", mgr->count);
    // 写入每个学生的信息
    for (int i = 0; i < mgr->count; i++) {
        fprintf(fp, "%s %d %.2f\n",
                mgr->students[i].name,
                mgr->students[i].id,
                mgr->students[i].score);
    }
    fclose(fp);
    printf(" 学生信息已保存到%s！\n", filename);
    return 1;
}

// 从文件加载学生信息
int loadFromFile(StudentManager *mgr, const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf(" 错误：无法打开文件%s（文件可能不存在）！\n", filename);
        return 0;
    }
    // 先清空现有数据
    mgr->count = 0;
    // 读取学生数量
    int count;
    fscanf(fp, "%d", &count);
    if (count > MAX_STUDENTS) {
        printf(" 错误：文件中的学生数量超出上限！\n");
        fclose(fp);
        return 0;
    }
    // 读取每个学生的信息
    for (int i = 0; i < count; i++) {
        char name[MAX_NAME];
        int id;
        float score;
        fscanf(fp, "%s %d %f", name, &id, &score);
        addStudent(mgr, name, id, score); // 复用addStudent（自动检查重复）
    }
    fclose(fp);
    printf(" 已从%s加载%d条学生信息！\n", filename, count);
    return 1;
}