#include<stdio.h>
int main()
{
	int n,d,s=0,temp;
	printf("enter number = ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		s=s+(d*d*d);
		n=n/10;
	}
	if(s==temp)
		printf("number is armstrong ");
	else
		printf("number is not armstrong ");
}
