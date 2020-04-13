#include<iostream>
#include<string.h>
using namespace std;

class str
{
	public:
	char a[100];
	char b[100];
};

int main()
{
	str *ptr;
	int i,k,j=0;
	ptr= new str;
	cout << "Enter a string:" <<endl;
	cin >> ptr->a;
	k=strlen(ptr->a);
	k=i;
	while(i>=0)
	{
		(ptr->b)[j]=(ptr->a)[i];
		i--;
		j++;	
	}
	cout <<"Reversed String:" <<endl;
	for(i=0;i<=k;i++)
	{
		cout << (ptr->b)[i] ;
	}
	cout << endl;
	delete ptr;
	return 0;
}
