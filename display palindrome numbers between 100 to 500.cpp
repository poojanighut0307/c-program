#include<stdio.h>
int main()
{
	int n,n1,r,cnt=0;
	printf("palindrome numbers = ");
	for(n=100; n<=500; n++)
	{
		r=0;
		n1=n;
		while(n1!=0)
		{
			r=(r*10)+(n1%10);
			n1=n1/10;
		}
		if(r==n)
		{
			printf("%d\t",n);
			cnt++;
		}
	}
}
