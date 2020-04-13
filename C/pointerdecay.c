#include<stdio.h>

void decay(char c[]);
int main()
{
	char a[20];
	printf("Enter input to an array:\n");
	scanf("%[^\n]%*c",a);
	printf("Size of the array initially:%li bytes\n",sizeof(a));
	char *t=a;
	printf("Size of the array after passing to pointer:%li bytes & Size of the pointer: %li bytes\n",sizeof(*t),sizeof(t));
	decay(a);
	return 0;
}

void decay(char c[])
{	
	printf("Size of the array after passing to a function:%li bytes\n",sizeof(c));
}
	
