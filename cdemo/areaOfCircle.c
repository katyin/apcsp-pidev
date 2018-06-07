#include <stdio.h>
float areaOfCircle(float radius);
int main()
{
 float radius;
 float area;
   for (float radius = 3.5; radius < 12.6; radius++)
 {
   area = areaOfCircle(radius);
printf("Radius=%f Area = %f\n", radius, area);
}
}



float areaOfCircle(float radius)
{
//calculating for area//
float area;
area = 3.14*radius*radius;
return (area);
}
