#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("enter number = ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		f=f*i;
	}
	printf("\n factorial =%d",f);
}
