#include<conio.h>
#include<stdio.h>

void main()
{
	int a[]={1,5,8,3,6},b[]={2,9,7,13,10},c[10],i,k,j;
	clrscr();
	printf("First Array:\n");
	for(i=0;i<=4;i++)
	{	printf("  %d",a[i]);
	}
	printf("\nSecond Array:\n");
	for(i=0;i<=4;i++)
	{	printf("  %d",b[i]);
	}
	for(i=0,k=0;k<=4,i<=4;i++,k++)
	{	c[k]=a[i];
	}
	for(i=0,k=5;i<=4,k<=9;i++,k++)
	{	c[k]=b[i];
	}
	printf("\nMerged Array:\n");
	for(i=0;i<=9;i++)
	{	printf("  %d",c[i]);
	}
	for(i=0;i<=8;i++)
	{	for(k=i+1;k<=9;k++)
		{	if(c[i]>c[k])
			{	j=c[i];
				c[i]=c[k];
				c[k]=j;
			}
		}
	}
	printf("\nMerged Array In Sorted Way:\n");
	for(i=0;i<=9;i++)
	{	printf("  %d",c[i]);
	}
	getch();

	getch();

}