#include<stdio.h>

int main()
{
	int x=1;
	int *p;
	p=&x;
	printf("Address of x:%u\nValue of x:%d\n",p,*p);
	return 0;

}
