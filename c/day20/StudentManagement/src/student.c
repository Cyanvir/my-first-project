#include "student.h"
#include <stdio.h>
#include <string.h>

// 初始化学生管理器
void initManager(StudentManager *mgr) {
    mgr->count = 0; // 初始学生数为0
}

// 添加学生
int addStudent(StudentManager *mgr, const char *name, int id, float score) {
    // 检查是否超出最大容量
    if (mgr->count >= MAX_STUDENTS) {
        printf(" 错误：学生数量已达上限！\n");
        return 0; // 添加失败
    }
    // 检查学号是否重复
    for (int i = 0; i < mgr->count; i++) {
        if (mgr->students[i].id == id) {
            printf(" 错误：学号%d已存在！\n", id);
            return 0;
        }
    }
    // 添加新学生
    Student s;
    strncpy(s.name, name, MAX_NAME-1); // 防止字符串溢出
    s.name[MAX_NAME-1] = '\0'; // 确保字符串结束
    s.id = id;
    s.score = score;
    mgr->students[mgr->count++] = s;
    printf(" 学生%s（学号%d）添加成功！\n", name, id);
    return 1; // 添加成功
}

// 删除学生（根据学号）
int deleteStudent(StudentManager *mgr, int id) {
    for (int i = 0; i < mgr->count; i++) {
        if (mgr->students[i].id == id) {
            // 后面的学生往前移，覆盖要删除的位置
            for (int j = i; j < mgr->count-1; j++) {
                mgr->students[j] = mgr->students[j+1];
            }
            mgr->count--;
            printf(" 学号%d的学生已删除！\n", id);
            return 1;
        }
    }
    printf(" 未找到学号%d的学生！\n", id);
    return 0;
}

// 查找学生（根据学号）
Student* findStudent(StudentManager *mgr, int id) {
    for (int i = 0; i < mgr->count; i++) {
        if (mgr->students[i].id == id) {
            return &mgr->students[i]; // 返回找到的学生指针
        }
    }
    return NULL; // 未找到
}

// 显示所有学生
void displayAllStudents(StudentManager *mgr) {
    if (mgr->count == 0) {
        printf(" 暂无学生信息！\n");
        return;
    }
    printf("\n===== 所有学生信息 =====\n");
    printf(" 学号\t姓名\t\t成绩\n");
    printf(" ------------------------\n");
    for (int i = 0; i < mgr->count; i++) {
        printf(" %d\t%s\t\t%.2f\n",
               mgr->students[i].id,
               mgr->students[i].name,
               mgr->students[i].score);
    }
}

// 修改学生成绩
int updateScore(StudentManager *mgr, int id, float newScore) {
    Student *s = findStudent(mgr, id);
    if (s) {
        s->score = newScore;
        printf(" 学号%d的成绩已更新为%.2f！\n", id, newScore);
        return 1;
    }
    printf(" 未找到学号%d的学生！\n", id);
    return 0;
}