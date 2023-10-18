#include<stdio.h>
#define PI 3.14
int main()
{
	float r,area;
	printf("enter the radius=");
	scanf("%f",&r);
	area=PI*r*r;
	printf("\n Area of circle=%f", area);
}
