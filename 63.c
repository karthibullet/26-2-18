#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char str[100];
int i = 0, l = 0, f = 1;
  clrscr();
puts("Enter any string\n");
gets(str);
for(i = 0; str[i] !='\0'; i++)
{
l = l + 1;
}
for(i = 0; i <= l-1; i++)
{
if(str[i] == ' ')
{
f = f + 1;
}
}
printf("The number of words in the string are %d", f);
}
