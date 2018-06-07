#include <stdio.h>
float areaOfCircle (float radius);
int main(int argc, char* argv[])
{
  float radius;
  float area;
  int arg1;
  int arg2;
  int found;

  float areaOfCircle(float r)
    {
      return 3.14*r*r;
    }
  
  if (argc != 3)
    {
       int arg1;
       int found = sscanf(argv[1], "%d", &arg1);
       if (found != 1)
         {
           printf("first arg is not an integer\n");
         }
    }
  else 
    {
      printf("First arg is an integer\n");
      return 1;
    }

  //int arg2;
  found = sscanf(argv[2], "%d", &arg2);
  if (found != 1)
    {
      printf("Second arg is not an integer\n");
    }
  else 
    {
      printf("Second arg is an integer\n");
      return 1;
    }

  printf("Your radius range is %d to %d\n", arg1, arg2);
 //float radius;
  for (int i = arg1; i <= arg2; i++)
     {
       radius = areaOfCircle(i);
       printf("Radius = %d Area = %f\n", i, radius);
     }
}
else {
  printf("Please enter two integers\n");
  char input1[256];
  char input2[256];
  int num1;
  int num2;
  float radius;

  fgets(input1, 256, stdin);
  if(sscanf(input1, "%d",&num1)!= 1);
      {
        printf("Not a valid integer - try again\n");
        return 1;
      }
  fgets(input2, 256, stdin);
  if(sscanf(input2, "%d",&num2)!= 1);
      {
        printf("Not a valid integer - try again\n");
        return 1;
      }

  for (int i = num1; i <= num2; i++)
      {
        radius = areaOfCircle(i);
        printf("Radius = %d Area = %f\n", i, radius);
      }
}
