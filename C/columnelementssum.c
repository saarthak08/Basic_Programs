#include <stdio.h>
int main()
{
	int a[100][100];
	int m,n,i,j,b=0,k;
	printf("\nEnter the no. of rows:\n");
	scanf("%d",&m);
	printf("\nEnter the no. of columns:\n");
	scanf("%d",&n);
	printf("\nEnter elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
	printf("\nEnter the column whose elements you want to add:\n");
	scanf("%d",&k);
	for(i=0;i<m;i++)
	{
		j=k-1;
		b=b+a[i][j];
	}
	printf("Sum of the elements of entered column:%d\n",b);
}










 
