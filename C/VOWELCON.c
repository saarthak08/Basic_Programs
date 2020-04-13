#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("Enter any lower case letter:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	printf("\nVowel");
	else
	printf("\nConsonent");
	getch();






}