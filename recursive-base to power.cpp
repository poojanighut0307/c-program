#include<stdio.h>
int basetopower(int x,int y)
{
	if(y==0)
		return 1;
	else
		return(x*basetopower(x,y-1));
}
int main()
{
	int x,y,a;
	printf("enter base to pawer = ");
	scanf("%d%d",&x,&y);
	a=basetopower(x,y);
	printf("base to power =%d",a);
}
