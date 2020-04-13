#include<stdio.h>
#include<conio.h>

void main()
{
  int wd;
  clrscr();
  printf("\nEnter A Week Day: ");
  scanf("%d",&wd);
  if (wd==1)
  printf("\nMonday");
  else if (wd==2)
  printf("\nTuesday");
  else if (wd==3)
  printf("\nWednesday");
  else if (wd==4)
  printf("\nThursday");
  else if (wd==5)
  printf("\nFriday");
  else if (wd==6)
  printf("\nSaturday");
  else if (wd==7)
  printf("\nSunday");
  else
  printf("\nInvalid Input");
  getch();
}
