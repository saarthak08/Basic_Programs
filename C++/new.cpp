#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	int i,j;
	string s;
	string *p=new string;
	cout << "Enter a string:" << endl;
	getline(cin,*p);
	cout << endl <<"Enter the position of index from where you want to replace:" << endl;
	cin >> i;
	cin.ignore(1);
	cout << "Enter the number of characters you want to replace from the index "<< i << ":" << endl;
	cin >> j;
	cin.ignore(1);
	cout << "Enter the text you want to replace:"<< endl;
	getline(cin,s);
	p->replace((i-1),j,s);
	cout <<endl<< "String after replacement: " << *p << endl;
	delete(p);
	return 0;
} 
	
	
	
