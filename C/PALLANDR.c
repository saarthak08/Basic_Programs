#include<stdio.h>
#include<conio.h>

void main()
{
	int x=0,n,d,e;
	clrscr();
	printf("\nEnter Any Number(Upto 4 Digits): ");
	scanf("%4d",&n);
	e=n;
	while(n>0)
      { d=n%10;
	n=n/10;
	x=x*10+d;
      }
	if(x==e)
	printf("\nGiven Number Is A Pallandrome");
	else
	printf("\nGiven Number Is Not A Pallandrome");
	getch();






}