#include<stdio.h>
#include<conio.h>


void main()
{
	int i,x,y,a=0,b=0;
	clrscr();
	printf("\nEnter Any Two Numbers:\n");
	scanf("%d%d",&x,&y);
	for(i=1;i<=x/2;i++)
      { if(x%i==0)
	a+=i;
      }
	for(i=1;i<=y/2;i++)
     {  if(y%i==0)
	b+=i;
     }
	if(y==a&&x==b)
	printf("\nGiven Two Nummbers Are Buddy Pairs");
	else
	printf("\nGiven Two Numbers Are Not Buddy Pairs");
	getch();







}