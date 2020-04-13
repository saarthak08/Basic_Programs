#include<stdio.h>

void main(int argc, char *argv[])
{
	int i;	
	printf("\nNumber of words in entered Argument:%d\n",argc);
	for(i=0;i<2;i++)
	{
		printf("\nEntered strings in arguments:%s\n",*argv);
	}
}
