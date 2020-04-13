#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	char type;
	clrscr();
	printf("\nEnter The Type Of TV You Want ('A' for LED & 'B' for LCD): ");
	scanf("%c",&type);
	printf("\nEnter The Size Of TV You Want(<32 or >=32): ");
	scanf("%d",&x);
	if(type='A')
      {
       if(x<32)
	printf("\n15% Discount");
	else
	printf("\n20% Discount");
      }
	else if(type='B')
      {
       if(x<32)
	printf("\n12% Discount");
	else
	printf("\n18% Discount");
      }
	else
	printf("\nInvalid Input");
	getch();


}