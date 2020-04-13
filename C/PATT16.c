#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{	printf("%d",j);
		}
		for(j=5-i;j>=1;j--)
		{	printf(" ");
		}
		for(j=4-i;j>=1;j--)
		{	printf(" ");
		}
		if(i==5)
		j=4;
		else
		j=i;
		for(;j>=1;j--)
		{	printf("%d",j);
		}
	printf("\n");
	}
	getch();

}