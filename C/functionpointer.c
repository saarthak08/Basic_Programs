#include<stdio.h>

int add(int a,int b);
int subtract(int a,int b);
int scan(int(*my)(int a, int b));
int main()
{
	printf("Press \'1\' for Addtiton\nPress \'2\' for subtraction\n");
	int x;
	scanf("%d",&x);
	q:
	if(x==1)
	{
		scan(add);
	}
	else if(x==2)
	{
		scan(subtract);
	}
	else
	{
		printf("Error! Invalid Input! Please try again!\n");
		goto q;
	}
}
int scan(int(*my)(int a, int b))
{
	int m,n,o;
	printf("\nEnter first number:\n");
	scanf("%d",&m);
	printf("\nEnter second number:\n");
	scanf("%d",&n);
	o=my(m,n);
	printf("\nResult:%d\n",o);
}
int add(int a,int b)
{
	int l;
	l=a+b;
	return l;
}
int subtract(int a,int b)
{
	int l;
	l=a-b;
	return l;
}	
	
