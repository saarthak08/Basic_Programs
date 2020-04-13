#include<stdio.h>


int main()
{
	int n,i,x,y,t,rev,d;

	printf("\nEnter Any Range Between Which You Have To Find All Pallandromes:\n");
	scanf("%d%d",&x,&y);
	printf("\nYou Have To Find Pallandromes From %d To %d",x,y);
	for(i=x;i<=y;i++)
      {	t=i;
	rev=0;
	while(t>0)
       {d=t%10;
	rev=rev*10+d;
	t=t/10;
       }
	if(rev==i)
	printf("\n%d",i);
       }
    return 0;




}
