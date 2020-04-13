#include<stdio.h>
#include<conio.h>

int main()
{       char opr;
	int x,y,res;
	clrscr();
	printf("Enter two numbers with any operator between them: ");
	scanf("%d%c%d",&x,&opr,&y);
	if(opr=='+')
	goto add;
	else if(opr=='-')
	goto sub;
	else if(opr=='*')
	goto multi;
	else if(opr=='/')
	goto divi;
	else if(opr=='%')
	goto mod;
	else
	goto invalid;
	add:
	res=x+y;
	printf("\n%d+%d=%d",x,y,res);
	goto end;
	sub:
	res=x-y;
	printf("\n%d-%d=%d",x,y,res);
	goto end;
	multi:
	res=x*y;
	printf("\n%d*%d=%d",x,y,res);
	goto end;
	divi:
	res=x/y;
	printf("\n%d/%d=%d",x,y,res);
	goto end;
	mod:
	res=x%y;
	printf("\n%d%%%d=%d",x,y,res);
	goto end;
	invalid:
	printf("\nInvalid Input");
	goto end;
	end:
	getch();




}
