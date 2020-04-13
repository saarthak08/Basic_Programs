#include<stdio.h>
#include<stdarg.h>
#include<time.h>

void add(int i,...);

int main(int argc,char *argv[])
{
	double total_time;
	clock_t start,end;
	start=clock();	
	int a,b,c,d,e,f;	
	printf("Enter five numbers:\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("\nEntered Numbers:\n%d,%d,%d,%d,%d",a,b,c,d,e);
	printf("\nIf you want to add:\nFirst two numbers --> Press \'2\'\nFirst three numbers --> Press \'3\'\nFirst four numbers --> Press \'4\'\nAll five numbers --> Press \'5\'\n");
	x:
	scanf("%d",&f);
	if(f==2)
	{
			
		add(2,a,b);
	}
	else if(f==3)
	{	
		add(3,a,b,c);
	}
	else if(f==4)
	{		
		add(4,a,b,c,d);
	}
	else if(f==5)
	{		
		add(5,a,b,c,d,e);
	}
	else
	{
		printf("\nError! Invalid Input!\nPlease try again\n");
		goto x;
	}	
	end=clock();
	total_time= ((double) (end-start))/CLOCKS_PER_SEC;
	printf("\nTime Taken to execute the program is %f seconds\n",total_time);
	return 0;
}

void add(int i,...)
{
	int j,k=0;
	va_list p;
	va_start(p,i);
	for(j=0;j<i;j++)
	{
		k+=va_arg(p,int);
	}
	printf("\n\n\nSum of the first %d numbers --> %d\n",i,k);
	va_end(p);
}
