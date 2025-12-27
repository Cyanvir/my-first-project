#ifndef STUDENT_H
#define STUDENT_H
#define MAX_NAME 50
#define MAX_STUDENTS 100
typedef struct {
	char name[MAX_NAME];
	int id;
	float score;
} Student;
typedef struct {
	Student students[MAX_STUDENTS];
	int count;
} StudentManager;
void initManager(StudentManager *mgr);
int addStudent(StudentManager *mgr, const char *name, int id, float score);
int deleteStudent(StudentManager *mgr, int id);
Student* findStudent(StudentManager *mgr, int id);
void displayAllStudents(StudentManager *mgr);
int updateScore(StudentManager *mgr, int id, float newScore);
#endif