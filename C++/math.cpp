#include<mathc2.h>
#include<iostream>

using namespace std;

int main()
{
	mathc2 a;
	int z,k;
	float c;
	cout << "Enter two numbers:" << endl;
	cin >> a.a;
	cin >> a.b;
	q:cout <<endl << "Press \'1\' to add" << endl << "Press \'2\' to subtract" << endl << "Press \'3\' to multiply" << endl << "Press \'4\' to divide" << endl << "Press \'5\' to find the remainder if " << a.a << "/" << a.b << endl <<endl;
	cin >> z;
	if(z==1)
	{
		k=a.addc(a.a,a.b);
	}
	else if(z==2)
	{
		k=a.subc(a.a,a.b);
	}
	else if(z==3)
	{
		k=a.mulc(a.a,a.b);
	}
	else if(z==4)
	{
		c=a.divc(a.a,a.b);
	}
	else if(z==5)
	{
		k=a.modc(a.a,a.b);
	}
	else
	{
		cout << "Oops!Invalid Input!" << endl << "Please, try again!" << endl;
		goto q;
	}
	if(z==3)
	{	
		cout << "Result: "  << c <<endl;
	}
	else
		cout << "Result: "  << k <<endl;
	return 0;
}
