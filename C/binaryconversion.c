#include<stdio.h>
#include<stdlib.h>

int main()
{
	int b,n,a[100],i,j;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if(n==0)
	{
		printf("\nBinary Equivalent: 0\n");
		exit(0);
	}
	for(i=0;n>1;n=n/2,i++)
	{
		b=n%2;
		a[i]=b;	
	}
	a[i]=1;
	printf("\nBinary Equivalent: ");
	for(j=i;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	printf("\n");
	return 0;
}
