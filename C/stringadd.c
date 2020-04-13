#include<stdio.h>

int main()
{
	char a[20]="Saarthak";
	char b[20]="Gupta";
	char c[20]="is a good boy";
	char d[30];	
	int i=0,k=0;
	char j;
	while(a[i]!='\0')
	{
		j=a[i];
		d[k]=j;
		i++;
		k++;		
	}

	d[k]=' ';
	k++;
	i=0;
	while(b[i]!='\0')
	{
		j=b[i];
		d[k]=j;
		i++;
		k++;
	}
	d[k]=' ';
	k++;
	i=0;
	while(c[i]!='\0')
	{
		j=c[i];
		d[k]=j;
		i++;
		k++;
	}
	d[k]='\0';
	printf("%s\n%s\n%s\n%s\n",a,b,c,d);
	return 0;
}
