#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int main()
{

	int *p,*a,i;
	printf("Enter any number:\n");
	p=malloc(5);
	scanf("%d",p);
	printf("\nEntered Number:%d\n",*p);
	a=calloc(25,sizeof(int));
	printf("\nEnter five numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",(a+i));
	}
	printf("\nEntered Numbers:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(a+i));
	}
	free(p);
	free(a);
}
	
	
