#include<stdio.h>

void main()
{
	int a,i,j;
	printf("\nEnter the limit upto which you want to find prime numbers (starting from 2):\n");
	scanf("%d",&a);
	printf("\nPrime numbers between 2 & %d:\n",a);	
	for(i=2;i<=a;i++)
	{
		for(j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				break;
			}			
			
		}
		if(j>(i/2))
		printf("%d ",i);
	}
	printf("\n");

		
}
