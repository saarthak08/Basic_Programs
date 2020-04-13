#include<stdio.h>
#include"encrypt.h"

int main()
{
	char a[100],b;
	printf("Enter any text you want to encrypt:\n");
	scanf("%[^\n]%*c",a);
	encrypt(a);
	printf("Encrypted text:%s\n",a);
	x:printf("\nPress '1' to decrypt the text\nPress '2' to exit\n");
	scanf("%c%*c",&b);
	if(b=='1')
	{
		encrypt(a);
		printf("\nDecrypted text:%s\n",a);
	}
	else if(b=='2')
	{
		return 0;
	}
	else
	{	
		printf("\nError! Invalid Input! Please try again!\n");	
		goto x;
	}
	return 0;
}
