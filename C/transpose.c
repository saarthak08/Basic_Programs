#include<stdio.h>

void main()
{
	float a[20][20];
	int i,j,m,n;
	printf("\nEnter the number of rows of matrix:\n");
	scanf("%d",&m);
	printf("\nEnter the number of columns of matrix:\n");
	scanf("%d",&n);
	printf("\nEntered matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%g ",a[i][j]);
		}
	printf("\n");	
	}
	printf("\nTranspose of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%g ",a[j][i]);
		}
	printf("\n");	
	}
}
