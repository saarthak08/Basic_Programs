#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();
	printf("\nEnter Percentage Of Marks:",x);
	scanf("%d",&x);
	if(x>=85&&x<=100)
	printf("\nYour Grade Is A",x);
	else if(x>=75&&x<=84)
	printf("\nYour Grade Is B",x);
	else if(x>=65&&x<=74)
	printf("\nYour Grade Is C",x);
	else if(x>=55&&x<=64)
	printf("\nYour Grade Is D",x);
	else if(x<=55&&x<=54)
	printf("\nYou Are Fail",x);
	else
	printf("Invalid Input",x);
	getch();
}