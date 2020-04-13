#include<stdio.h>
#include<conio.h>

void main()
{
	int n,x=0,d;
	clrscr();
	printf("\nEnter Any Digit(Upto 4 Digits Only): ");
	scanf("%4d",&n);
	while(n!=0)
      { d=n%10;
	n=n/10;
	x++;
      }
	printf("\nNumber Of Digits Entered=%d",x);
	getch();



}