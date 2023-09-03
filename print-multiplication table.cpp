#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number = ");
	scanf("%d",&n);
	printf("\n Table= ");
	for(i=1; i<=10; i++)
	{
		printf("%d\n ",n*i);
	}
}
