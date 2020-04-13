#include<stdio.h>

int main()
{
	FILE *f;
	int i,j;
	char a[100],b;
	f=fopen("abc.txt","w");
	printf("Enter the text you want to input in the file:\n");
	scanf("%[^\n]%*c",a);
	fprintf(f,"%s\n",a);
	fclose(f);
	printf("\nPress \"Enter\" key to input data directly to the file or Press \"E\" to exit:");
	b=getchar();
	if(b=='E'||b=='e')
	{
		return 0;
	}
	else
	printf("\nEnter the data(Press \"Ctrl+D\" to exit):\n");
	f=fopen("abc.txt","a");
	while((b=getchar())!=EOF)
	{	
		putc(b,f);
	}
	fclose(f);
	printf("\n\nPress \"Enter\" key to read data from the file:\n");
	getchar();
	f=fopen("abc.txt","r");
	if(!(f=fopen("abc.txt","r")))
	{
		printf("\nError! File not found!\n");
		return 0;
	}
	else
	while((b=getc(f))!=EOF)
	{
		printf("%c",b);
	}
	fclose(f);
	return 0;
		
}
