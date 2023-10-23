#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int a,b,c;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	if(a>b && a>c)
		printf("maximum no =%d",a);
	else if(b>a && b>c)
		printf("maximum no=%d",b);
	else
		printf("maximum no =%d",c);
}
