#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

string xencrypt(string c)
{
	int i;	
	for(i=0;i<100;i++)
	{
		c[i]=c[i]^31;
	}
	return c;
}

