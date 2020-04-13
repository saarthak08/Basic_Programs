#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5],i,j,n;
	clrscr();
	printf("\nEnter any five numbers:\n");
	for(i=0;i<=4;i++)
	{	scanf("%d",&arr[i]);
	}
	printf("\nEnter any number you want to find:\n");
	scanf("%d",&n);
	for(i=0;i<=4;i++)
	{	if(arr[i]==n)
	       {	printf("\nGiven number is in the array");
			break;
	       }
		else
		printf("\nGiven number is not in the array");
		break;
	}
	getch();


}