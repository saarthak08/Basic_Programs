#include<stdio.h>

void main()
{
	int i,j,k,n;
	printf("\nEnter a number between 1 and 100:\n");
	scanf("%d",&n);
	for(i=1;i<=(n-1);i++)
	{
		for(j=1;j<=(n-1);j++)
		{
			for(k=1;k<=(n-1);k++)
			{
				if(i+j+k==n)
				{
					printf("%d,%d,%d\n",i,j,k);
				}
			}		
		}
	}
}
