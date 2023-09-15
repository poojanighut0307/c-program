#include<stdio.h>
void prime(int n)
{
	int f=0,i;
	for(i=2; i<n; i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
		printf("%d\t",n);
}
int main()
{
	int n,a,b;
	printf("enter values of a and b ");
	scanf("%d%d",&a,&b);
	for(n=a; n<b; n++)
	{
		prime(n);
	}
}
