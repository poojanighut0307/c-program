#include<stdio.h>
int power(int x,int y)
{
	int a=1;
	while(y>0)
	{
		a=a*y;
		y--;
	}
	return a;
}
int main()
{
	int x,y=1,n,i;
	float s=0;
	printf("enter value of x ");
	scanf("%d",&x);
	printf("enter value of n ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		s=s+(power(x,y)/y);
		y=y+2;
	}
	printf("\n sum of series = %f",s);
}
