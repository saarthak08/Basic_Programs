#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5],i,d,t,rev=0;
	clrscr();
	printf("\nEnter any five numbers:\n");
	for(i=0;i<=4;i++)
	{	scanf("%d",&arr[i]);
	}
	printf("\nGiven Array Elements:\n");
	for(i=0;i<=4;i++)
	{	printf("\n%d",arr[i]);
	}
	for(i=0;i<=4;i++)
	{	t=arr[i];
		rev=0;
		while(t>0)
	       {
		d=t%10;
		rev=rev*10+d;
		t=t/10;
	       }
		if(arr[i]==rev)
		printf("\n%d is a pallandrome in given array",arr[i]);
	}
	getch();



}