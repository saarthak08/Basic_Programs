#include<stdio.h>

int recur(int p, int q);
int main()
{
	int a,b,c=0;
	printf("\nEnter which term of the fabonacci series(starting from 1,2,3,5...) you want to find:\n");
	scanf("%d",&a);
	b=recur(a,c);
	printf("\nThe %d term of the series is %d\n",a,b);
}
int recur(int p, int q)
{
	int y;
	q=1;
	if(p==1)
	{
		return(1);
	}
	else 
	{ 
	while(q=p)
	{}}
}


