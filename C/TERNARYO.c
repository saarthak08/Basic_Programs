#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("\nEnter Any Three Numbers:\n");
	scanf("%d%d%d",&x,&y,&z);
	x>y&&x>z?printf("\nx=%d is the greatest.",x):y>z?printf("\ny=%d is the greatest.",y):printf("\nz=%d is the greatest.");
	getch();


}