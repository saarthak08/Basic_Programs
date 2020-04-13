#include<stdio.h>

void main()
{
	char *name;
	int len;
	printf("\nEnter a string:\n");
	scanf("%[^\n]%*c",name);
	char *i=name;
	while(*name!='\0')
	{
		printf("\n%c is stored at the address %u",*name,name);
		name++;
	}
	len=name-i;
	printf("\nLength of the string:%d\n",len);
}
