#include<stdio.h>
int main()
{
	int n,i,f=0,s=1,t;
	printf("enter limit");
	scanf("%d",&n);
	printf("\n fibonacci series =%d\t%d",f,s);
	for(i=1; i<n; i++)
	{
		t=f+s;
		printf("\t%d",t);
		f=s;
		s=t;
	}
}
