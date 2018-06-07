#include <stdio.h>
#include <string.h>
int main()
{
    struct Student 
        {
          char firstname[50];
          char lastname[50];
          char age[50];
          int studentid[100];
        };

    int index = 1;
    char a[500];
    char input[50];

    struct Student stdntstruct[500];
    printf("Would you like to enter a student's information? y/n\n");
    fgets (input, 256, stdin);
    sscanf (input, "%s", a);

    while(strcmp(a, "y")==0)
        {
          printf("First name: \n");
          fgets(input, 256, stdin);
          sscanf(input, "%s", stdntstruct[index].firstname);

          printf("Last name: \n");
          fgets(input, 256, stdin);
          sscanf(input, "%s", stdntstruct[index].lastname);

          printf("Age: \n");
          fgets(input, 256, stdin);
          sscanf(input, "%s", stdntstruct[index].age);

          printf("Student ID: \n");
          fgets(input, 256, stdin);
          sscanf(input, "%s", stdntstruct[index].studentid);
          printf("Here are the inputs:\n First Name:%s\n Last Name:\n Age:%s\n Student ID:%s\n", stdntstruct[index].firstname, stdntstruct[index].lastname, stdntstruct[index].age, stdntstruct[index].studentid);
          printf("Would you like to enter another student's information? y/n\n");
          fgets(input, 256, stdin);
          sscanf(input, "%s", a);

          index++;
        }
        


void printStudents(struct Student stdntstruct[50], int studentnum)
{
  for (int i=1; i<studentnum; i++)
  {
    printf("Student %d:\nFirst name: %s\nlast name: %s\nage: %s\nstudent id: %s\n", i, stdntstruct[i].firstname, stdntstruct[i].lastname, stdntstruct[i].age, stdntstruct[i].studentid);
  }
}

printStudents(stdntstruct, index);
}
