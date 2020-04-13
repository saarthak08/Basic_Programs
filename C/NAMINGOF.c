#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();
	printf("\nEnter The Number Upto Which You Want The Number Of Even Numbers:");
	scanf("%d",&n);
	i=0;
	while(i<=n)
      {	if(i%2==0)
	printf("\n%d-Even",i);
	else
	printf("\n%d-Odd",i);
	i++;
      }
	getch();





}