#include<stdio.h>
int main()
{
	int n ,d,r=0;
	printf("enter number = ");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		r=r*10+d;
	}
	printf("number = ");
	while(r>0)
	{
		printf("%d\t",r%10);
		r=r/10;
	}
}
