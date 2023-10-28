#include<stdio.h>
int main()
{
	int n,n1,r,cnt=0,d;
	printf("armstrong numbers = ");
	for(n=100; n<=5000; n++)
	{
		r=0;
		n1=n;
		while(n1>0)
		{
			d=n1%10;
			r=r+d*d*d;
			n1=n1/10;
		}
		if(r==n)
		{
			printf("%d\t",n);
			cnt++;
		}
	}
}
