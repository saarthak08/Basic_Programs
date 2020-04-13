#include<stdio.h>

void main()
{
	char a[20];
	int i,j;
	printf("\nEnter the URL:\n");
	scanf("%[^\n]%*c",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(!(a[0]>=65&&a[0]<=90))
		{
			if(!(a[0]>=97&&a[0]<=122))
			{
				if(!(a[0]>=48&&a[0]<=57))
				{					
					for(j=0;a[j]!='\0';j++)					
					{						
						a[j]=a[j+1];
					}		
				}
			}
		}
	}		
	for(i=0;a[i]!='\0';i++)	
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i]=a[i]+32;
		}
		if(!(a[i]>=65&&a[i]<=90))
		{
			if(!(a[i]>=97&&a[i]<=122))
			{
				if(!(a[i]>=48&&a[i]<=57))
				{					
					a[i]='-';
				}
			}
		}

	}
	if(!(a[i-1]>=65&&a[i-1]<=90))
		{
			if(!(a[i-1]>=97&&a[i-1]<=122))
			{
				if(!(a[i-1]>=48&&a[i-1]<=57))
				{					
					a[i-1]=' ';
				}
			}

		}
	for(i=0;a[i]!='\0';i++)
	{
		if(!(a[i]>=65&&a[i]<=90))
		{
			if(!(a[i]>=97&&a[i]<=122))
			{
				if(!(a[i]>=48&&a[i]<=57))
				{					
					if(a[i]=a[i+1])
					{							
							a[i]=a[i+1];		
					}					
				}
			}
		}		
	}
	printf("\nFriendly URL:%s\n",a);
}



