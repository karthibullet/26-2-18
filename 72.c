
#include<stdio.h>
  int main()
  {
  char s[20]="hhh";int flag=0,i;
  for(i=0;i<=10;i++)
  {
  if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
  {
  flag=1;
  }     
  }
  if(flag==1)
  {
  printf("yes");
  }
  else
  {
  printf("no");
  return 1;
  }
  }
