#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5],i,h,l,m,n;
	clrscr();
	printf("Enter any five numbers for array:\n");
	for(i=0;i<=4;i++)
	{	scanf("%d",&arr[i]);
	}
	printf("\nGiven array elements:\n");
	for(i=0;i<=4;i++)
	{	printf("\n%d",arr[i]);
	}
	printf("\nEnter any number:\n");
	scanf("%d",&n);
	l=0;
	h=4;
	while(l<=h)
	{	m=(l+h)/2;
		if(arr[m]==n)
		{	printf("%d is found",n);
			break;
		}
		else if(arr[m]<n)
		l=m+1;
		else
		h=m-1;
	}
	if(l>h)
	{	printf("%d is not found",n);
	}
	getch();



}