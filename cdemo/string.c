#include <stdio.h>
#include <string.h>
int main()
{

  char str1[] = "abcdefghijklmnopqrstuvwxyz";
  char str2[27];
  char c = 'a';
for (int i = 0; i < 27; i++)
{
	str2[i] = c;
	c++;
}
  str2[26]='\0';

  if (strcmp(str1, str2) == 0)
   { printf("the strings are identical\n");}
  else
    {printf("the strings are different\n");}
printf("string 1:%s\n", str1);
printf("string 2:");
for (int i = 0; i < 26; i++)
{
	c = str2[i];
	str2[i] = c - 32;
	printf("%c", str2[i]);
}
printf("\n");
  if (strcmp(str1, str2) == 0)
   { printf("the strings are identical\n");}
  else
   { printf("the strings are different\n");}
char str3[52];
strcat(str3, str1);
strcat(str3, str2);
printf("string 3:%s\n", str3);
}
