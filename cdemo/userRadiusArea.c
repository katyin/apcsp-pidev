#include <stdio.h>
float areaOfCircle (float radius);
int main()
{
  float radius[256];
  float area;
  char input1[256];
  char input2[256];
  int age;
  
  printf("Enter a range for the radius?\n");
  fgets(input1, 256, stdin);
  sscanf(input1, "%s", radius);
  fgets(input2, 256, stdin);
  sscanf(input2, "%s", radius);

  printf("%s, %s\n", radius);
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%d", &age) == 1) break;
    printf("Not a valid age - try again!\n");
  }
  
  printf("Hi %s, you look young for %d…\n", name, age);
  printf("Enter Radius:");
  scanf("%f", &radius);
  area = areaOfCircle(radius);
  printf("Area=%f\n", area);
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
