#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
	printf("The Range of int is (%d)-(%d)",INT_MIN,INT_MAX);
	printf("\nSize of int is %li bytes\n",sizeof(int));
	printf("\nThe Range of float is (%g)-(%g)",FLT_MIN,FLT_MAX);
	printf("\nSize of float is %li bytes\n",sizeof(float));
	printf("\nThe Range of char is (%d)-(%d)",CHAR_MIN,CHAR_MAX);
	printf("\nSize of char is %li bytes\n",sizeof(char));
	printf("\nThe Range of short is (%hi)-(%hi)",SHRT_MIN,SHRT_MAX);
	printf("\nSize of short is %li bytes\n",sizeof(short));
	printf("\nThe Range of double is (%g)-(%g)",DBL_MIN,DBL_MAX);
	printf("\nSize of double is %li bytes\n",sizeof(double));
	printf("\nThe Range of long is (%ld)-(%ld)",LONG_MIN,LONG_MAX);
	printf("\nSize of long is %li bytes\n",sizeof(long));
	printf("\nThe Range of long double is (%Lg)-(%Lg)",LDBL_MIN,LDBL_MAX);
	printf("\nSize of long double is %li bytes\n",sizeof(long double));
}
