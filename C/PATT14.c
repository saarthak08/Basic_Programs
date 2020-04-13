#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,s;
	clrscr();
	for(i=1;i<=5;i++)
	{	for(j=4;j>=i;j--)
		{	printf(" ");
		}
		for(j=1;j<=i;j++)
		{	printf("%d",j);
		}
		printf("\n");
	}
	for(k=4;k>=1;k--)
	{	for(s=4;s>=k;s--)
		{	printf(" ");
		}
		for(s=1;s<=k;s++)
		{	printf("%d",s);
		}
		printf("\n");
	}
	getch();



}