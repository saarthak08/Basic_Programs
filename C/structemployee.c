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
	struct record emp[10];
	int i;
	char e[20]={"NAME"},f[20]={"NUMBER"},g[20]={"DEGREE"},h[20]={"DEPARTMENT"};
	printf("\nEnter the details of the employee:\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter the name of employee %d:\n",i+1);
    		scanf("%[^\n]%*c",emp[i].name);
    		printf("\nEnter the number of employee %d:\n",i+1);
    		scanf("%d%*c",&emp[i].num);
		printf("\nEnter the degree of employee %d:\n",i+1);
		scanf("%[^\n]%*c",emp[i].deg);
    		printf("\nEnter the department of employee %d:\n",i+1);
    		scanf("%[^\n]%*c",emp[i].dep);
    	}
    	printf("\nPress \"Enter\" key to continue!\n");
    	getchar();
    	printf("\nProcessing");
    	for(i=0;i<2999999;i++)
    	{
		printf("---\b\b\b...\b\b\b");
	}
	printf("\n\nEntered Details:\n");
	printf("|%25s|%10s|%25s|%25s|\n",e,f,g,h);	
	for(i=0;i<90;i++)
    	{
    		printf("_");
    	}
    	printf("\n");	
    	for(i=0;i<5;i++)
    	{   
		printf("|%25s|%10d|%25s|%25s|\n",emp[i].name,emp[i].num,emp[i].deg,emp[i].dep);
 	}      	
	for(i=0;i<90;i++)
    	{
	   	printf("_");
	}
	printf("\n");
	return 0;
}
