#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("Enter Three Numbers:");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
		printf("\nx=%d is the greatest number.",x);
		else
		printf("\nz=%d is the greatest number.",z);
	}
	else if(x<y)
	{
		if(y>z)
		printf("\ny=%d is the greatest number.",y);
		else
		printf("\nz=%d is the greatest number.",z);
	}
	else
	printf("\nAll The Numbers Are Equal");
	getch();





}