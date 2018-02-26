#include <stdio.h>
#include <conio.h>
void main()
{
char a[100];
int length,i,word=1;
printf("enter the string");
gets(a);
length=strlength(a);
for(i=0;i<length;i++)
{
if(a[i]!=' ' && a[i+1]==' ')
word=word+1;
}
printf("%d",word);
}	
