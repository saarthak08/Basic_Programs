#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,z;
	clrscr();
	printf("\nEnter Any Number Between 0 & 99: ");
	scanf("%d",&x);
	if(x==0)
      { printf("\nZero");
	getch();
	return(0);
      }
	y=x/10;
	z=x%10;
	switch(y)
      { case 2:printf("\nTwenty ");break;
	case 3:printf("\nThirty ");break;
	case 4:printf("\nForty ");break;
	case 5:printf("\nFifty ");break;
	case 6:printf("\nSixty ");break;
	case 7:printf("\nSeventy ");break;
	case 8:printf("\nEighty ");break;
	case 9:printf("\nNinty ");break;
	case 1:switch(z)
	      {case 0:printf("\nTen");break;
	       case 1:printf("\nEleven");break;
	       case 2:printf("\nTwelve");break;
	       case 3:printf("\nThirteen");break;
	       case 4:printf("\nFourteen");break;
	       case 5:printf("\nFifteen");break;
	       case 6:printf("\nSixteen");break;
	       case 7:printf("\nSeventeen");break;
	       case 8:printf("\nEighteen");break;
	       case 9:printf("\nNineteen");break;
	       }break;
      }
      if(y!=1)
       switch(z)
     { case 1:printf("One");break;
       case 2:printf("Two");break;
       case 3:printf("Three");break;
       case 4:printf("Four");break;
       case 5:printf("Five");break;
       case 6:printf("Six");break;
       case 7:printf("Seven");break;
       case 8:printf("Eight");break;
       case 9:printf("Nine");break;
     }
     getch();
}