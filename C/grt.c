#include<stdio.h>

void main()
{
	int a,b,c,d;
	printf("\nEnter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nThree numbers entered:%d,%d & %d\n",a,b,c);
	d=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("\nGreatest number:%d\n",d);
}

