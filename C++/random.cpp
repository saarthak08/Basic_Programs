#include<iostream>
#include<stdlib.h>
#include<sstream>

using namespace std;

string *GetSecretCode()
{
	string *code=new string;
	code->append("CR");
	int randomnumber=rand();
	ostringstream converter;
	converter << randomnumber;
	code->append(converter.str());
	code->append("NQ");
	return code;
}

int main(int argv, char *argc[])
{
	string *newcode;
	int index;
	for(index=0;index<10;index++)
	{
		newcode = GetSecretCode();
		cout << *newcode << endl;
	}
	return 0;
} 
