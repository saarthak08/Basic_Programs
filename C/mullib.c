#include<stdio.h>
#include<mul.h>

int main()
{
	double x,y,z,a;
	printf("Enter two numbers:\n");
	scanf("%le%le",&x,&y);
	z=mul(2,x,y);
	printf("\n%gx%g=%g\n\n",x,y,z);
	printf("Enter three numbers:\n");
	scanf("%le%le%le",&x,&y,&z);
	a=mul(3,x,y,z);
	printf("\n%gx%gx%g=%g\n",x,y,z,a);
}
