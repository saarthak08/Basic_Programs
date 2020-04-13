#include<stdio.h>
#include<conio.h>

void main()
{
  int Salary;
  float HRA, TA, DA, Gross, Tax, Net;
  clrscr();
  printf("\nEnter Your Monthly Salary:");
  scanf("%d",&Salary);
  HRA=(0.15*Salary);
  TA=(0.12*Salary);
  DA=(0.10*Salary);
  Gross=Salary+HRA+DA+TA;
  printf("\nHRA:%f",HRA);
  printf("\nTA:%f",TA);
  printf("\nDA:%f",DA);
  printf("\nGross Salary:%f",Gross);
  Tax=0.15*Gross;
  printf("\nTax:%f",Tax);
  Net=Gross-Tax;
  printf("\nNet Salary:%f",Net);
  getch();

}
