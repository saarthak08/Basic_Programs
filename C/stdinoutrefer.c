#include<stdio.h>

int main(int argv, int *argc[])
{
	int i,j;	
	printf("To refer standard input & output from a file & to a file respectively\n\"<\" is used to take input from a file & \">\" is used to give output to a file\nThere are one input stream and two output streams for every program i.e. Standard Input, Standard Output & Standard Error\n\"|\" is used for connecting standard output of a program to standard input of another program\n\"2<\" is used to print standard error to a file\nEnter a number. Press \'1\' to get error\n");
	scanf("%d",&i);
	printf("\nNumber of command line arguments:%d\n",argv);
	printf("\nCommand Line Arguments Passed:\n");
	for(j=0;j<argv;j++)
	{
		printf("%s\n",argc[j]);
	}
	if(i==1)
	{	fprintf(stderr,"Error!\n");
		return 1;
	}
	else
		return 0;
	
}	
	
