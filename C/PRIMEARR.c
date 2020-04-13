#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5],i,j;
	clrscr();
	printf("Enter five numbers:\n");
	for(i=0;i<=4;i++)
	{	scanf("%d",&arr[i]);
	}
	printf("\nGiven array elements:\n");
	for(i=0;i<=4;i++)
	{	printf("\n%d",arr[i]);
	}
	for(i=0;i<=4;i++)
	{	for(j=2;j<=arr[i]/2;j++)
	       {	if(arr[i]%j==0)
		      {	printf("\n%d is a composite number in the given array",arr[i]);
			break;
		      }
	       }
			if(j>arr[i]/2)
		      { printf("\n%d is a prime number in the given array",arr[i]);
		      }


	}
	getch();



}