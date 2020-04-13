#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[300][300],i,j,k,n=0,m,p,q,r,s;
	printf("Enter the number of rows of first array:\n");
	scanf("%d",&p);
		printf("Enter the number of columns of first array:\n");
	scanf("%d",&q);
		printf("Enter the number of rows of second array:\n");
	scanf("%d",&r);
		printf("Enter the number of columns of second array:\n");
	scanf("%d",&s);
	if(q!=r)
	{
		printf("\nError! The two matrices can't be multiplied since the number of columns of first matrix is not equal to the number of rows of second matrix\n");
		return 0;
	}
	else
	printf("\nEnter the elements of first matrix:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("First matrix:\n");
		for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ",a[i][j]);
		}
        printf("\n");
	}
		printf("\nEnter the elements of second matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
    printf("Second matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
			printf("%d ",b[i][j]);
		}
        printf("\n");
	}
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			for(k=0;k<100;k++)
			{
				m=a[i][k]*b[k][j];
		        n=n+m;
			}
         c[i][j]=n;
         n=0;
		}
	}
    printf("\nMutiplication of first matrix with second matrix gives:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<s;j++)
		{
			printf("%d ",c[i][j]);
		}
        printf("\n");
	}
    return 0;
}			