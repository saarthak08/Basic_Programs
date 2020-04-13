#include<stdio.h>
#include<add.h> //To include it add -ladd after gcc in terminal i.e. for compilation type gcc addlib.c -ladd

void main()
{
	double x,y,z,a;
	printf("Enter two numbers:\n");
	scanf("%le%le",&x,&y);
	z=add(2,x,y);
	printf("\n%g+%g=%g\n\n",x,y,z);
	printf("Enter three numbers:\n");
	scanf("%le%le%le",&x,&y,&z);
	a=add(3,x,y,z);
	printf("\n%g+%g+%g=%g\n",x,y,z,a);
}
