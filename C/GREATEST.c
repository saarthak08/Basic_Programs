#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("Enter Three Numbers:");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z)
       {
	printf("\nx=%d is the greatest number",x);
       }
       else if(y>z)
       {
	printf("\ny=%d is the greatest number",y);
       }
       else if(z>x)
       {
       printf("\nz=%d is the greatest number",z);
       }
       else
       printf("All the numbers are equal");
       getch();





}