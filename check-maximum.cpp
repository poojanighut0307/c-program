#include<stdio.h>
int main()
{
	int a,b;
	printf("enter first number= ");
	scanf("%d",&a);
	printf("enter second number= ");
	scanf("%d",&b);
	
	if(a>b)
		printf("a = %d is maximum",a);
	else
		printf("b = %d is maximum",b);
}
