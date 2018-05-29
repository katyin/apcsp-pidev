#include <stdio.h>
float areaOfCircle(float radius);
int main()
{
  float radius;
  float area;
  printf("Enter Radius:");
  scanf("%f", &radius);
  area = areaOfCircle(radius);
  printf("Area=%f\n", area);
}

float areaOfCircle(float radius)
{
//calculating for area//
float area;
area = 3.14*radius*radius;
return (area);
}
