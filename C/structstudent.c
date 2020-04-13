#include<stdio.h>

struct record
{
	char name[20];
	int num;
	char deg[20];
	char dep[20];
};

int main()
{
	struct record stu[10];
	int i,j;
	char e[20]="NAME",f[20]="NUMBER",g[20]="DEGREE",h[20]="DEPARTMENT";
	printf("\nEnter the details:\n");
	printf("\nEnter the number of students(0-9):\n");
	scanf("%d%*c",&j);
	for(i=0;i<j;i++)
	{
		printf("\nEnter the name of student %d:\n",i+1);
    		scanf("%[^\n]%*c",stu[i].name);
		y:
		printf("\nEnter the number of student %d:\n",i+1);
    		scanf("%d%*c",&stu[i].num);
		printf("\nEnter the degree of student %d:\n",i+1);
		scanf("%[^\n]%*c",stu[i].deg);
    		printf("\nEnter the department of student %d:\n",i+1);
    		scanf("%[^\n]%*c",stu[i].dep);
    	}
    	printf("\nPress \"Enter\" key to continue!\n");
    	getchar();
    	printf("\nProcessing");
    	for(i=0;i<2999999;i++)
    	{
		printf("---\b\b\b...\b\b\b");
	}
	printf("\n\nEntered Details:\n");
	printf("+");	
	for(i=0;i<25;i++)
    	{
    		printf("-");
    	}
	printf("+");      	
	for(i=0;i<10;i++)
    	{
	   	printf("-");
	}
	printf("+");      	
	for(i=0;i<25;i++)
    	{
	   	printf("-");
	}
	printf("+");      	
	for(i=0;i<25;i++)
    	{
	   	printf("-");
	}
	printf("+");
    	printf("\n");		
	printf("|%25s|%10s|%25s|%25s|\n",e,f,g,h);
	printf("+");	
	for(i=0;i<25;i++)
    	{
    		printf("-");
    	}
	printf("+");      	
	for(i=0;i<10;i++)
    	{
	   	printf("-");
	}
	printf("+");      	
	for(i=0;i<25;i++)
    	{
	   	printf("-");
	}
	printf("+");      	
	for(i=0;i<25;i++)
    	{
	   	printf("-");
	}
	printf("+");
    	printf("\n");	
    	for(i=0;i<j;i++)
    	{   
		printf("|%25s|%10d|%25s|%25s|\n",stu[i].name,stu[i].num,stu[i].deg,stu[i].dep);
 	}
	printf("+");      		
	for(i=0;i<25;i++)
    	{
    		printf("-");
    	}
	printf("+");      	
	for(i=0;i<10;i++)
    	{
	   	printf("-");
	}
	printf("+");      	
	for(i=0;i<25;i++)
    	{
	   	printf("-");
	}
	printf("+");      	
	for(i=0;i<25;i++)
    	{
	   	printf("-");
	}
	printf("+");
	printf("\n");
	return 0;


}
