#include<stdio.h>

void main()
{
	char a[100],b;
	int i,j=0,m;
	printf("\nEnter a string:\n");
	scanf("%[^\n]%*c",a);
	printf("\nEnter the character to be deleted:\n");
	scanf("%c",&b);
	for(i=0;i<100;i++)
	{
		if(a[i]==b)
		{
			j=1;
			break;
		}
	}
	while(j=1&&a[i]!='\0')
	{
		i++;
		if(a[i]==b)
		{	
			m=i;
			while(a[m]!='\0')
			{
				a[m]=a[m+1];
				m++;
			}
		}
	}
	printf("\nString after deleting the repeatition of %c:\n%s\n",b,a);
}
