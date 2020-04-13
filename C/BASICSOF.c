#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5],i;
	clrscr();
	printf("\nEnter five numbers:\n");
	for(i=0;i<=4;i++)
	{	scanf("%d",&arr[i]);
	}
	printf("\nGiven array elements:\n");
	for(i=0;i<=4;i++)
	{	printf("\n%d",arr[i]);
	}
	getch();


}