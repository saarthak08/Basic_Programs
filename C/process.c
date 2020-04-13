#include<stdio.h>

int main()
{
	int a=0;
	printf("\nProcessing");
	while(a<199999)
	{
		printf("---\b\b\b...\b\b\b");
		a++;
	}
	printf("...\n");
	return 0;
}
