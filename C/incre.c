#include<stdio.h>

int main()
{
	int var=5,b,c;
	b=++var;
	printf("\n%d\n",b);
	c=var--;
	printf("%d\n",c);
	b=--var;
	printf("\n%d",b);
	c=var++;
	printf("\n%d\n",c);
	return 0;
}
