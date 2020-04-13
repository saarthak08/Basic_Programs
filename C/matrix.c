#include<stdio.h>

void main()
{
	int a[3][3],i,j,k;
	printf("\nEnter the numbers of array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}		
	}
	k=a[0][0];
	for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
			if(k<a[i][j])
			{
				k=a[i][j];
			}		
		}
	}
	printf("\nLargest element in first row of array:\n%d\n",k);
	k=a[1][0];	
	for(i=1;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				if(k<a[i][j])
				{
					k=a[i][j];
				}
			}
		}
		printf("\nLargest element in second row of array:\n%d\n",k);
	k=a[2][0];	
	for(i=2;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(k<a[i][j])
				{
					k=a[i][j];
				}
			}
		}
		printf("\nLargest element in third row of array:\n%d\n",k);
}
		
