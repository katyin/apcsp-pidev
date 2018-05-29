#include <stdio.h>
void arrayAdd(int* arrPtr, int s, int n);
int main()
{
  int arr[100];
  int i;
  int n;
  int s;
for (i = 0; i <100; i++)
{
  arr[i] = i*i;
}
int* arrPtr = &arr[0];
arrayAdd(arrPtr, s, n);
printf("Enter the amount to increment each element:");
scanf("%d\n", &n);
for (i = 0; i <100; i++);
{
  printf("d%\n", *arrPtr++);
}

}


//void because we don't want a return
void arrayAdd(int *arrPtr, int s, int n)
// s is size of array
//n is amount each element increases
// arr is pointer for array
{
  int i;
  for (i = 0; i < s; i++);
{
  *arrPtr = *arrPtr + n;
  arrPtr++;
  //changes pointer to next index
}
}
