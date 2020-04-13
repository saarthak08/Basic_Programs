#include<stdio.h>

int main()
{
	int i,n,a[100],j,count=1,counter=0;
	printf("Enter numbers of elements:\n");
	scanf("%d",&n);
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i>0)
		{
		for(j=(i-1);j>=0;j--)
		{
			if(a[j]==a[i])
			{
				counter=1;
			}
		}
		}
		if(counter==0)
		{		
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{	
				count++;
			}
					
		}
		}
		if(counter!=1)
		{
			printf("Frequency of %d is %d\n",a[i],count);
		}
		count=1;
		counter=0;
	}
	return 0;
}
	
