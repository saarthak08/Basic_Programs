#include<stdio.h>
#include<conio.h>

void main()
{
	int n,x,rev=0;
	clrscr();
	printf("\nEnter Any Number(Upto 4 Digits Only): ");
	scanf("%4d",&n);
	while(n>0)
      { x=n%10;
	n=n/10;
	rev=rev*10+x;
      }
	printf("\nReverse Of The Number:%d",rev);




	getch();



}