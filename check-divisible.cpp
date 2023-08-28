#include<stdio.h>
int main()
{
	int a;
	printf("enter number=");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
		printf("\n divisible by 3 and 5");
	else
		printf("\n not divisible by 3 and 5");
}
