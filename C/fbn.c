#include<stdio.h>

void main()
{

	int a,b,c,i,d;
	printf("\nEnter the value of a:\n");
	scanf("%d",&a);
	printf("\nEnter the value of b:\n");
	scanf("%d",&b);	
	printf("\nEnter the number of terms:\n");
	scanf("%d",&c);
	printf("\nSeries:\n");
	printf("%d %d ",a,b);
	for(i=2;i<c;i++)
	{
		d=a+b;
		printf("%d ",d);
		a=b;
		b=d;
	}
	printf("\n");
}
	
