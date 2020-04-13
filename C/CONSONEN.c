#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("Enter Any Lower Case Letter:");
	scanf("%c",&ch);
	switch (ch)
      {	case 'a':printf("\nVowel"); break;
	case 'e':printf("\nVowel"); break;
	case 'i':printf("\nVowel"); break;
	case 'o':printf("\nVowel"); break;
	case 'u':printf("\nVowel"); break;
	default:
	printf("Consonent");
       }
	getch();





}