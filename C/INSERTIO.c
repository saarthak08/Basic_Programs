#include<stdio.h>


int main()
{
	int arr[]={10,20,30,40},i,n,p;

	printf("\nGiven Array Elements:\n");
	for(i=0;i<=3;i++)
	{	printf(" %d",arr[i]);
	}
	printf("\nEnter a number & its position to be inserted:\n");
	scanf("%d%d",&n,&p);
	if(p<1&&p>4)
	{	printf("\nInvalid Position");

		return 0;

	}
	for(i=4;i>=p;i--)
	{      arr[i]=arr[i-1];
	}
	arr[i]=n;
	printf("\nArray Elements After Insertion:\n");
	for(i=0;i<=4;i++)
	{	printf("  %d",arr[i]);
	}






}
