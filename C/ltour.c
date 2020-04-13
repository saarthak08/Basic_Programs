#include<stdio.h>
 
 void main()
 {
 	int i,j,k;
 	char str[100],rev[100];
 	scanf("%[^\n]%*c",str);
 	printf("The original string:\n%s\n",str);
 	//Length of string
 	for(i=0;str[i]!='\0';i++)
 	{
 		k=i;
 	}
 	//Reversing String
 	for(j=0;j<=i;j++)
 	{
 		rev[j]=str[k];
 		k--;
 	}
 	//Converting lower case to upper case
 	for(j=0;j<100;j++)
 	{
 		if(rev[j]>=97&&rev[j]<=122)
 		{
 			rev[j]=rev[j]-32;
 		}
 	}
 	printf("Reversed upper case string:\n%s\n",rev);
 	}