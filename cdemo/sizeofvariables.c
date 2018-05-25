#include<stdio.h>

int main()
{
	int a = 5;
	float b = 6;
	double c = 7; 
	char d = '8';
	signed int e = 9; 
	unsigned int f = 10; 
printf("Var a has a size of %d bytes\n", sizeof(a));
printf("Var b has a size of %d bytes\n", sizeof(b));
printf("Var c has a size of %d bytes\n", sizeof(c));
printf("Var d has a size of %d bytes\n", sizeof(d));
printf("Var e has a size of %d bytes\n", sizeof(e));
printf("Var f has a size of %d bytes\n", sizeof(f));
}

