#include<stdio.h>
int main()
{
	char ch;
	printf("enter character= ");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90)
		printf("lowercase = %c",ch+32);
	else
		printf("uppercase = %c",ch-32);
}
