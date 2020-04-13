#include<stdio.h>

int main()
{
	char a[100],str[100];
	int i,j=0,k,f=0,c,t=0;
	printf("Enter a string:\n");
	scanf("%[^\n]%*c",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			k=i-1;
			f=i-1;
			c=i-1;
			while(str[c]!=' '||c>0)
			{
				c--;
				t++;
			}
			if(k>t)
			{
				while(k>(c-t))
				{
					a[j]=str[k];
					k--;
					j++;
				}
			}
			else
			{
				while(k>=0)
				{
					a[j]=str[k];
				 	k--;
				 	j++;
				}
			}
		t=0;
		a[j]=' ';
		j++;
		}
	}
	if(f==0)
	{

		while(i>=f)
		{
			a[j]=str[i];
			i--;
			j++;
		}
	}
	else
	{
		while(i>(f+1))
		{
			a[j]=str[i];
			i--;
			j++;
		}
	}

		a[j]='\0';
		printf("\nReversed word string:%s\n",a);
		for(i=0;a[i]!='\0';i++)
		{
			printf("%c",a[i]);
		}
		printf("\n");

}
