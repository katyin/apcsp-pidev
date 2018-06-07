#include <stdio.h>
#include <string.h>

{
    struct Student 
        {
          char firstname[50];
          char lastname[50];
          char age[50];
          int studentid[100];
        };

void printStudents(struct Student stdntstruct[50], int num)
{
  for (int i=1; i<num; i++)
  {
    printf("Student %d:\nFirst name: %s\nlast name: %s\nage: %s\nstudent id: %s\n", i, stdntstruct[i].firstname, stdntstruct[i].lastname, stdntstruct[i].age, stdntstruct[i].studentid);
  }
}

