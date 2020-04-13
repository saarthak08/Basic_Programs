#include<stdio.h>

void main()
{
	int i,j,d,rev=0,l=0,m=0,k;
	scanf("%d%d",&i,&j);
	printf("%d,%d",i,j);
    while(i>0)
    {
    	d=i%10;
    	rev=rev*10+d;
    	i=i/10;
    }
    while(j>0)  
	{	d=j%10;
    	l=l*10+d;
    	j=j/10;
    }
    k=rev+l;
    while(k>0)
    {
    	d=k%10;
    	m=m*10+d;
    	k=k/10;
    }
    printf("\n%d",m);



}