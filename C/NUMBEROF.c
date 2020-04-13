#include<stdio.h>
#include<conio.h>

void main()
{
	int x,a,n,k;
	clrscr();
	printf("\nEnter Range For Isomeric Numbers: ");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
      {
	k=0;
	for(a=1;a<=x/2;a++)
      { {if(x%a==0)
	 k+=a;
	}
      }
       {if(k==x)
	printf("\n%d",x);
       }

      }
	getch();


}