#include <stdio.h>
int main()
{
	int a[100][100];
	int m,n,i,j,b=0,k;
	printf("\nEnter the no. of rows:\n");
	scanf("%d",&m);
	printf("\nEnter the no. of columns:\n");
	scanf("%d",&n);
	if(m!=n)
	{
		printf("\nError! Entered rows & columns are not equal\n");
		return 0;
	}
	else
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
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{	
				b=b+a[i][j];
			}		
		}
	}
	printf("Sum of the elements of diagonal:%d\n",b);
	return 0;
}










 
