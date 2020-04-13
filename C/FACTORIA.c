#include<stdio.h>

int main()
{
	int n,i,x=1;

	printf("\nEnter Any Number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
       {
		x=x*i;
       }
	printf("Factorial Of The Number: %d",x);
	return 0;

}
