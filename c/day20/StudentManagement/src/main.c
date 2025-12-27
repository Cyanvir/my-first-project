#include <stdio.h>
#include "student.h"
#include "file_utils.h"
#include <windows.h>

void showMenu() {
	printf("\n===== 学生成绩管理系统 =====\n");
	printf("1. 添加学生\n");
	printf("2. 删除学生\n");
	printf("3. 查询学生\n");
	printf("4. 修改成绩\n");
	printf("5. 显示所有学生\n");
	printf("6. 保存到文件\n");
	printf("7. 从文件加载\n");
	printf("0. 退出\n");
	printf(" 请选择: ");
}
int main() {
	SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
	StudentManager mgr;
	initManager(&mgr);
	int choice;
	char name[MAX_NAME];
	int id;
	float score;
	while(1) {
		showMenu();
		scanf("%d", &choice);
		switch(choice) {
			case 1:
			printf(" 请输入姓名: ");
			scanf("%s", name);
			printf(" 请输入学号: ");
			scanf("%d", &id);
			printf(" 请输入成绩: ");
			scanf("%f", &score);
			addStudent(&mgr, name, id, score);
			break;
			case 2:
			printf(" 请输入要删除的学号: ");
			scanf("%d", &id);
			deleteStudent(&mgr, id);
			break;
			case 3:
			printf(" 请输入要查询的学号: ");
			scanf("%d", &id);
			Student *s = findStudent(&mgr, id);
			if(s) {
				printf(" 姓名: %s, 学号: %d, 成绩: %.2f\n",
					s->name, s->id, s->score);
			} else {
				printf(" 未找到该学生\n");
			}
			break;
			case 4:
			printf(" 请输入学号: ");
			scanf("%d", &id);
			printf(" 请输入新成绩: ");
			scanf("%f", &score);
			updateScore(&mgr, id, score);
			break;
			case 5:
			displayAllStudents(&mgr);
			break;
			case 6:
			saveToFile(&mgr, "data/students.txt");
			break;
			case 7:
			loadFromFile(&mgr, "data/students.txt");
			break;
			case 0:
			printf(" 再见！\n");
			return 0;
			default:
			printf(" 无效选择\n");
		}
	}
	return 0;
}