#include <stdio.h>
#include <string.h>
struct Student 
        {
          char firstname[50];
          char lastname[50];
          char age[50];
          int studentid[100];
        };
void printStudents(struct Student stdntstruct[50], int num);
