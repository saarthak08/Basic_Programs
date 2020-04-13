#include<stdio.h>
#include<conio.h>

void main()
{
  int x;
  clrscr();
  printf("\nEnter A Number:");
  scanf("%d",&x);
  if(x%2==0)
  printf("\nThe Given Number Is Divisible By 2");
  else
  printf("\nThe Given Number Is Not Divisible By 2");
  getch();

}