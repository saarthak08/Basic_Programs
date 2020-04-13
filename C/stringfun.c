#include<stdio.h>
#include<string.h>

int main()
{
	char a[20],b[20],c[20];
	int i,j;
	printf("Enter the first string:\n");
	scanf("%[^\n]%*c",a);
	printf("\nEnter the second string:\n");
	scanf("%[^\n]%*c",b);
	printf("Adding the string 2 to string 1:\n");
	printf("%s\n",strcat(a,b));
	printf("\nLength of first string:\n%d\n",i=strlen(a));
	printf("Length of second string:\n%d\n",i=strlen(b));
	printf("\nComparing strings:%d\n",i=strcmp(a,b));
	printf("Enter a string to be searched in string 1:\n");
	scanf("%[^\n]%*c",c);
	printf("\nSearched string:%s\n",strstr(a,c));
	printf("Copying some characters of string 1 to 2:\n");
	printf("Enter number of characters of string 1 to be copied to string 2:\n");
	scanf("%d",&i);
	printf("%s\n",strncat(b,a,i));
	
	return 0;
}
	


