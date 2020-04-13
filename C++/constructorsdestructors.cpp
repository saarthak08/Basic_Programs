#include<iostream>

using namespace std;

class Add
{
	public:
	int a;
	int b;
	int add(int *x,int *y);
	Add();
	~Add();
};

int Add::add(int *x,int *y)
{
	int c;
	c=(*x)+(*y);
	return c;
}

Add::Add()
{
	cout <<"Enter two numbers:" <<endl;
}

Add::~Add()
{
	cout <<endl<< "Thanks! Exiting" <<endl;
}

int main()
{
	int k;
	Add *ptr;
	ptr= new Add;
	cin>> ptr->a;
	cin >> ptr->b;
	k=(ptr->add(&(ptr->a),&(ptr->b)));
	cout <<"Result:" << k <<endl;
	delete ptr;
	return 0;
}
