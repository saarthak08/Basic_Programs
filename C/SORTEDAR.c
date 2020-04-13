#include<stdio.h>


void main()
{
	int arr[5],i,j,t;
	printf("\nEnter any five numbers for array:\n");
	for(i=0;i<=4;i++)
	{	scanf("%d",&arr[i]);
	}
	for(i=0;i<=3;i++)
	{	for(j=i+1;j<=4;j++)
		{       if(arr[i]>arr[j])
		       {	t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
		       }
		}
	}
	printf("\nSorted Array Elements:\n");
	for(i=0;i<=4;i++)
	{	printf("\n%d",arr[i]);
	}




}
