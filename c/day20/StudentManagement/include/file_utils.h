#ifndef FILE_UTILS_H
#define FILE_UTILS_H
#include "student.h"
int saveToFile(StudentManager *mgr, const char *filename);
int loadFromFile(StudentManager *mgr, const char *filename);
#endif
