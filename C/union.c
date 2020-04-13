#include<stdio.h>

typedef union
{
	int x;
	float y;
	char z;
}my;

typedef struct
{
	int a;
	char b[20];
	float c;
	my k;
}st;

void display(st *t);
int main()
{
	st w;	
	char q;	
	printf("Enter any number:\n");
	scanf("%d%*c",&w.a);
	printf("\nEnter a string:\n");
	scanf("%[^\n]%*c",w.b);
	printf("\nEnter a floating digit:\n");
	scanf("%f%*c",&w.c);
	printf("\nEnter a single character:\n");
	scanf("%c%*c",&w.k.z);
	e:printf("\nPress \"1\" to print the entered data.\nPress \"2\" to exit.\n");
	scanf("%c%*c",&q);
	if(q=='1')
	{
		display(&w);
	}
	else if(q=='2')
	{
		return 0;
	}
	else
	{
	printf("\nError! Invalid Input! Please try again\n");
	goto e;
	}
	return 0;
}
void display(st *t)
{
	printf("\nEntered Number:%d",(*t).a);
	printf("\nEntered String:%s",t->b);
	printf("\nEntered floating digit:%g",t->c);
	printf("\nEntered single character:%c\n",t->k.z);
}
