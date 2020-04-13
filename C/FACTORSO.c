#include<stdio.h>
#include<conio.h>

void main()
{
	int x,d;
	clrscr();
	printf("\nEnter Any Number(Upto 4 Digits Only): ");
	scanf("%d",&x);
	for(d=1;d<=x/2;d++)
      { if(x%d==0)
	printf("\n%d is a Factor Of %d",d,x);
      }
	getch();





}

