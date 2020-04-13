#include<stdio.h>

void main()
{
	char a;
	printf("\n\r\Enter any lower case character:\n");
	scanf("%c",&a);
	switch(a)
	{
		case 'a':printf("\nVowel\n");break;
		case 'e':printf("\nVowel\n");break;
		case 'i':printf("\nVowel\n");break;
		case 'o':printf("\nVowel\n");break;
		case 'u':printf("\nVowel\n");break;
		default: printf("\nConsonant\n");
	}
}
