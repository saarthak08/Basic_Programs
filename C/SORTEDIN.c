#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[]={10,20,30,40,50},i,j,k;
	clrscr();
	printf("Given Array Elements:\n");
	for(i=0;i<=5;i++)
	{	printf("  %d",arr[i]);
	}
	printf("\nEnter The Number You Want To Insert:\n");
	scanf("%d",&j);
	for(k=0;k<=5;k++)
	{	if(arr[k]>j||arr[k]==0)
		break;
	}
	for(i=5;i>j;i--)
	{	arr[i]=arr[i-1];
	}
	arr[i]=j;
	printf("\nArray Elements After Insertion:\n");
	for(i=0;i<=5;i++)
	{	printf("  %d",arr[i]);
	}
	getch();



}