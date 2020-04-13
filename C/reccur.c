#include<stdio.h>

int factorial(int a);
void result(int q,int r);
int main()
{
	int a,b;
	printf("\nEnter any number:\n");
	scanf("%d",&a);
	b=factorial(a);
	result(b,a);
}

int factorial(int k)
{
	int p;
	if(k==0||k==1)
	return (1);
	else
	p=k*factorial(k-1);
	return p;
}
void result(int s,int q)
{
	printf("Factorial of %d:\n%d\n",q,s);
}
