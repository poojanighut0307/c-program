#include<stdio.h>
#define MAX(a,b) a>b?a:b
int main()
{
	int a,b,c;
	printf("enter two num = ");
	scanf("%d %d ",&a,&b);
	c=MAX(a,b);
	printf("\n maximum num =%d ",c);
}
