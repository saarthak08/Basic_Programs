#include<iostream>
#include<stdlib.h>
#include"xencrypt.h"
using namespace std;

int main()
{
	string a,e;
	char k;
	int b;
	cout << "Enter the text you want to encrypt:" << endl;
	cin >> a;
	e=xencrypt(a);
	cout <<endl<< "Encrypted Text: " << e << endl;
	x:cout <<endl << "If you want to decrypt, press \'1\'" << endl << "If you want to exit, press \'2\'" << endl;
	cin >>b;
	if(b==1)
	{	
		e=xencrypt(e); 
		cout <<endl<< "Decrypted Text: " << e << endl;
	}
	else if(b==2)
	{
		exit(0);	
	}
	else
	{
		cout <<endl<< "Invalid Input!" << endl << "Please Try Again" << endl;
		goto x;
	}
	return 0;
}



