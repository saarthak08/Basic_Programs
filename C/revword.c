#include<stdio.h>

int main()
{
	char a[20],str[20];
	int b=0,d=0,i=0,k=0,c=0,t=0,j=0,p=0,w=0,f=0,q=0;
	printf("Enter a string:\n");
	scanf("%[^\n]%*c",str);
	for(b=0;str[b]!='\0';b++)
	{
		if(str[b]=' ')
		{	w=1; 
			break;
		}
	}
	if(w==1)
	{
		for(d=0;str[d]!=' ';d++)
		{	
			q=d;
			while(d>=0)
			{
				a[j]=str[d];
			 	d--;
			 	j++;
			}
		}		
		a[j]=' ';
		j++;
		for(i=q+2;str[i]!='\0';i++)
		{
			if(str[i]==' ')
			{       
				p=i-1;
				c=i-1;
				f=i-1;
				while(str[c]!=' ')
				{
					c--;
					t++;
				}
				while(p>(f-t))
				{
					a[j]=str[p];
					p--;
					j++;
				}
			t=0;
			a[j]=' ';
			j++;	
			continue;	
			}
		}
		i=i-1;
		while(i>(f+1))
			{
				a[j]=str[i];
				i--;
				j++;
			}	
		a[j]='\0';
	}
	else
	{
		k=0;
		j=0;
		while(a[k]!='\0')
		{
			k++;
		}
		while(k>=0)
		{
			a[j]=str[k];
			j++;
			k--;
		}
		a[j]='\0';
	}
	printf("-->%c<--",(a[0]));
	printf("\nReversed word string:\n");
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
}

