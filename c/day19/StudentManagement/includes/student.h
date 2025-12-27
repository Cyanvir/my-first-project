#ifndef STUDENT_H
#define STUDENT_H

struct Student{
	int id;
	char name[64];
};

void print_studnet(const struct Student *s);

#endif // STUDENT_H