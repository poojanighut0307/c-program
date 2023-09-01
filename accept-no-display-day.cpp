#include<stdio.h>
int main()
{
	int d;
	printf("enter day in number = ");
	scanf("%d",&d);
	if(d==1)
		printf("Monday");
	else if(d==2)
		printf("Tuesday");
	else if(d==3)
		printf("Wednesday");
	else if(d==4)
		printf("Thursday");
	else if(d==5)
		printf("Friday");
	else if(d==6)
		printf("Saturday");
	else if(d==7)
		printf("Sunday");
	else
		printf("Invalid day");
}
