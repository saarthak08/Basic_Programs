#include<stdio.h>

int main()
{
	FILE *f;	
	char d,a[100];
	int i=0;	
	f=fopen("input.txt","r");
	while((d=getc(f))!=EOF)
	{
		a[i]=d;
		i++;
	}	
	printf("%s",a);
	fclose(f);
}
