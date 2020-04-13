#include<stdio.h>
int swap(int *a, int *b);
int main()
{
 
int a,b;
 
printf("\n Enter first number: ");
scanf("%d",&a);
 
printf(" Enter second number: ");
scanf("%d",&b);
 
swap(&a,&b); 

 
printf("\n After Swapping... \n");
 
printf(" First Number: %d", a);
printf("\n Second Number: %d", b);
 
return 0;
}
int swap(int *a, int *b)
{  
int c;
c=*a;  
*a=*b;
*b=c;
return 0;
 
}