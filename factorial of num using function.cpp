#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return(n*fact(n-1));
}
int main()
{
	int n,ans;
	printf("enter num=");
	scanf("%d",&n);
	ans=fact(n);
	printf("factorial of num %d",ans);
}
