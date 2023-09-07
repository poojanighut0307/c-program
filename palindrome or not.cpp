#include<stdio.h>
int main()
{
	int n,n1,d,r=0;
	printf("enter number = ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		d=n%10;
		r=(r*10)+d;
		n=n/10;
	}
	if(r==n1)
		printf("number is palindrome ");
	else
		printf("number is not palindrome ");
}
