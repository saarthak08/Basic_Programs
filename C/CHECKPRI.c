#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();
	printf("\nEnter Any Number(Upto 4 Digits Only): ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
      { if(n%i==0)
	printf("\nNot A Prime Number");
	break;
      }
	if(i>n/2)
	printf("\nPrime Number");
	getch();

}