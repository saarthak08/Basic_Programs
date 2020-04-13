#include<conio.h>
#include<stdio.h>

void main()
{
	char ch,x;
	clrscr();
	printf("The Upper Case Letters will swap in such a way that A-Z,B-Y & so on.\nEnter Any Upper Case Letter:");
	scanf("%c",&ch);
	x=155-ch;
	printf("Swapped Letter:%c",x);
	getch();





}