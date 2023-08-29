#include<stdio.h>
int main()
{
	char ch;
	printf("enter character= ");
	scanf("%c",&ch);
	
	if(ch>='A'&&ch<='Z')
		printf("\n character is uppercase... ");
	else
		printf("\n character is lowercase...");
}
