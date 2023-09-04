#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number= ");
	scanf("%d",&n);
	printf("even number= ");
	for(i=2; i<=n; i=i+2)
	{
		printf("%d\t",i);
	}
}
