#include <stdio.h>
float areaOfCircle(float radius);
int main()
{
  float radius;
  float area;
  printf("Enter Radius:");
  scanf("%f", &radius);
  area = areaOfCircle(radius);
    printf("Radius = %d Area = %f\n", areaOfCircle(radius));
}

float areaOfCircle(float radius)
{

    for (float radius = 3.5; radius < 12.6; radius ++)
{
//calculating for area//
float area;
area = 3.14*radius*radius;
return (area);
}
}
