#include<stdio.h>
int main()
{
	int a[8] ,i,s=0;
	float p;
	printf("enter the 8 subject  marks :");
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<8; i++)
	{
		s=s+a[i];
	}
	p=(float)s/8;
	
	printf("\n total marks=%d",s);
	printf("\n percentage =%f",p);
}
