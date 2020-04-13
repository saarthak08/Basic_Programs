#include<stdio.h>
#include<conio.h>

void main()
{
	int n,d;
	clrscr();
	printf("\nEnterAny Digit(Upto 4 Digits Only): ");
	scanf("%d",&n);
	while(n!=0)
       {d=n%10;
	n=n/10;
	printf("%d",d);




	}
	getch();


}


