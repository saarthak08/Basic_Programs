#include<stdio.h>
#include<conio.h>

void main()
{
  int wd;
  clrscr();
  printf("Enter A Week Day:");
  scanf("%d",&wd);
  switch(wd)
 { case 1:printf("Monday");break;
  case 2:printf("Tuesday");break;
  case 3:printf("Wednesday");break;
  case 4:printf("Thursday");break;
  case 5:printf("Friday");break;
  case 6:printf("Saturday");break;
  case 7:printf("Sunday");break;
  default:printf("Invalid Input");break;
 }
  getch();
}