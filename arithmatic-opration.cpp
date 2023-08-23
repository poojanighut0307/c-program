#include<stdio.h>
int main()
{
	float a,b,add,sub,mul,div;
	printf("enter two num = ");
	scanf("%f%f",&a,&b);
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	
	printf("\n Addition= %f",add);
	printf("\n Substraction= %f",sub);
	printf("\n Multiplication= %f",mul);
	printf("\n Division= %f",div);
}
