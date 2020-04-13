#include<stdio.h>

void main()
{
	int n,r,i,m=1,l=1,b=1;
	float k=1.0;
	printf("\nEnter the values of n & r in nPr & nCr respectively:\n");
	scanf("%d%d",&n,&r);
	printf("\n%dP%d:\n",n,r);
	for(i=n;i>=1;i--)
	{
		m*=i;		
	}
	for(i=(n-r);i>=1;i--)
	{
		l*=i;
	}	
	k=m/l;
	printf("%g\n",k);
	printf("\n%dC%d:\n",n,r);
	for(i=r;i>=1;i--)
	{
		b*=i;
	}
	k=m/(l*b);
	printf("%g\n",k);

}
