#include<stdio.h>
int sum(int n)
{
	if(n==0)
		return 0;
	else
		return(n+sum(n-1));
}
int main()
{
	int n ,s;
	printf("enter number = ");
	scanf("%d",&n);
	s=sum(n);
	printf("\n sum of natural number =%d",s);
}
