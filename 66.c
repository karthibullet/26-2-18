
#include<stdio.h>
int main()
{
	int n,i,a,count=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
	a=n%i;
	if(a==0)
	{
	count++;
	}
	if((count==0)||(count==1))
	{
	printf("%d is prime no",n);
	}
	else
	{
	printf("%d is not a prime number",n);
	}
  return 0;
	}
