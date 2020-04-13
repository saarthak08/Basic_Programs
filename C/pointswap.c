#include<stdio.h>

void swap(int *c, int *d);

int main()
{
	int a,b;	
	printf("\nEnter first number \'a\':\n");
	scanf("%d",&a);
	printf("\nEnter second number \'b\':\n");
	scanf("%d",&b);
	printf("\na:%d\nb:%d\n",a,b);
	swap(&a,&b);
	printf("\nAfter Swapping,\na:%d\nb:%d\n",a,b);
	return 0;
}
void swap(int *c,int *d)
{
	*c=*c+*d;
	*d=*c-*d;
	*c=*c-*d;
}
	
