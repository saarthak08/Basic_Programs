#include<stdarg.h>
#include<stdio.h>
double add(int x,...)
{
	int i;
	double y=0;
	va_list p;
	va_start(p,x);
	printf("Hi");
	for(i=0;i<x;i++)
	{
		y+=va_arg(p,double);
	}
	va_end(p);
	return y;
}
