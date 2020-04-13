#include<iostream>

using namespace std;

class Vehicle
{
	public:
	void drive();
	protected:
	void protect()
{
	cout << "Private member accessed" <<endl;
}
};

class Toyota:public Vehicle
{
	public:
	void mytoyota();
	
};

void Vehicle::drive()
{
	cout << "Hi! This is my vehicle!" <<endl;
}

void Toyota::mytoyota()
{
	cout<< "This is my Toyota" <<endl;
}

int main(int argv,char *argc[])
{
	Toyota a;
	a.drive();
	a.mytoyota();
	return 0;
}
