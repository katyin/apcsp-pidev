#include <stdio.h>
float areaOfCircle (float radius);
int main(int argc, char*argv[])
{
  int arg1;
  int arg2;
  float radius[256];
  float area;
  char input1[256];
  char input2[256];
  int num1;
  int num2;
  float area(float a)
{
   return 3.14*a*a;
}


printf("Enter a range for the radius?\n");
fgets(input1, 256, stdin);
  if (sscanf(input1, "%d", &num1) != 1);
   {
        printf("Not a valid number\n");
        return 1;
   }
fgets(input2, 256, stdin);
   if (sscanf(input2, "%d", &num2);
   {
	printf("Not a valid number\n");
	return 1;
   }
float areaOfCircle(float radius)
{//calculating for area//
for (radius = 3.5; radius <= 12.5; radius++)
{
	float area;
	area = 3.14*radius*radius;
	return (area);
}

}
