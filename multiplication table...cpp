#include<stdio.h>
int main()
{
	int n, a,i;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1; i<=10; i++)
	{
		a=n*i;
		printf("%d\n",a);
	}
}
