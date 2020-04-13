#include<stdio.h>

int main(int argv,char *argc[])
{
	int i;	
	char e[200];
	scanf("%[^\n]%*c",e);
	printf("String After passing from pipe1.c to pipe2.c:\n%s\n",e);
	printf("\nCommand Line Arguments:\n");
	for(i=0;i<argv;i++)
	{
		printf("%s\n",argc[i]);
	}
	return 0;
}

	
