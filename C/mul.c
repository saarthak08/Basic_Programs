#include<stdarg.h>

double mul(int x,...)
{
	int i;
	double y=1.0;
	va_list p;
	va_start(p,x);
	for(i=0;i<x;i++)
	{
		y=y*va_arg(p,double);
	}
	va_end(p);
	return y;
}	
