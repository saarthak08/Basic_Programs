#include<stdio.h>

typedef struct{
	char stream[20];
	int rolln;
	}info;

typedef struct student
{
	char name[20];	
	char fn[20];
	int hn;
	info edu;
}my;

int display(my a);
int main()
{
	my b;
	printf("Enter your name: ");
	scanf("%[^\n]%*c",b.name);
	printf("\nEnter your father's name: ");
	scanf("%[^\n]%*c",b.fn);
	printf("\nEnter your house number: ");
	scanf("%d%*c",&b.hn);
	printf("\nEnter your college name: ");
	scanf("%[^\n]%*c",b.edu.stream);
	printf("\nEnter your roll number: ");
	scanf("%d%*c",&b.edu.rolln);
	display(b);	
}
int display(my a)
{
	char k;
	x:printf("\n\nPress '1' to show information.\nPress '2' to exit.\n");
	scanf("%c%*c",&k);
	if(k=='1')
	{
	printf("Name: %s\nFather's Name: %s\nHouse Number: %d\nCollege Name: %s\nRoll Number: %d\n",a.name,a.fn,a.hn,a.edu.stream,a.edu.rolln);
	}
	else if(k=='2')
	{
	printf("\n");	
	return 0;
	}
	else
	printf("\nError! Invalid Input! Please try again!");
	goto x;
}
	
