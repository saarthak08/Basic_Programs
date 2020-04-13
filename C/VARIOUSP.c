#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,ch,Result;
	clrscr();
	printf("Enter Any Two Numbers:",x,y);
	scanf("%d%d",&x,&y);
	printf("\nEnter One Of The Following: \n1 For Addition \n2 For Subtraction",ch);
	scanf("%d",&ch);
	if(ch==1)
       {	Result=x+y;
	printf("%d+%d=%d",x,y,Result);
       }
	else if(ch==2)
       {
	Result=x-y;
	printf("%d-%d=%d",x,y,Result);
       }
	else
	printf("Invalid Input");
	getch();








}
