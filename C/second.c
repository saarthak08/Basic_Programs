#include<stdio.h>

int main()
{

	char c[100];
	int j=0,i;
	scanf("%[^\n]%*c",c);
	for(i=0;i<100;i++)
	{		
	if(c[i]=='a'||c[i]=='A'||c[i]=='e'||c[i]=='E'||c[i]=='i'||c[i]=='O'||c[i]=='o'||c[i]=='u'||c[i]=='I'||c[i]=='U')
		{		
			j++;
		}
	}
	printf("\nNumber of vowels:%d\n",j);
}
