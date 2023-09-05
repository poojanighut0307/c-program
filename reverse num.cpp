#include<stdio.h>
int main()
{
	int n;
	printf("enter number = ");
	scanf("%d",&n);
	printf("\n Reverse number= ");
	while(n>0)
	{
		printf("%d",n%10);
		n=n/10;
	}
}
