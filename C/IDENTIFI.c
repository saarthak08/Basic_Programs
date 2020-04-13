#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\nEnter Any Character:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	printf("\nUpper Case Letter");
	else if(ch>=97&&ch<=122)
	printf("\nLower Case Letter");
	else if(ch>=48&&ch<=57)
	printf("\nNumeric Character");
	else
	printf("\nSpecial Character");
	getch();

}