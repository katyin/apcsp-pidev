#include <stdio.h>
int main()
{
  int arr[100];
  int i;
for (i = 0; i <100; i++)
{
  arr[i] = i*i;
}
int* arrPtr = &arr[0]
printf("Enter the amount to increment each element:")
scanf("%d\n", &n)
int arrayadd;
for (i = 0; i <100; i++)
{
  printf("d%\n", *arr++);
}

};


//void because we don't want a return
void arrayAdd(int *arrPtr, int s, int n)
// s is size of array
//n is amount each element increases
// arr is pointer for array
{
for (i = 0; i < s; i++)
{
  *arrPtr = *arrPtr + n;
  arrPtr++;
  //changes pointer to next index
}
}
