#include<stdio.h>

void main()
{
	int a[5],i,j;
	printf("\nEnter the numbers of the array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEntered numbers of the array:\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	j=a[0];
	for(i=0;i<5;i++)
	{	
		if(j<a[i])
		{
			j=a[i];
		}
	}
	printf("\nLargest number of the array: %d\n",j);
}
		
