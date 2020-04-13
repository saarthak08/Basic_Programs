#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("Enter Any Two Numbers:",x,y);
	scanf("%d%d",&x,&y);
	printf("\nThe Two Numbers Entered Are: x=%d And y=%d",x,y);
	z=x;
	x=y;
	y=z;
	printf("\nResult After Swapping Are x=%d And y=%d",x,y);
	getch();
}


