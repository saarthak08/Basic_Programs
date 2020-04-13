#include<iostream>
#include<stdlib.h>

using namespace std;

class cn
{
	public:
	int real;
	int imaginary;
	cn operator+(cn &b)
	{
		cn c;
		c.real=this->real+b.real;
		c.imaginary=this->imaginary+b.imaginary;
		return c;
	}
	cn operator-(cn &b)
	{
		cn c;
		c.real=this->real-b.real;
		c.imaginary=this->imaginary-b.imaginary;
		return c;
	}
	cn operator*(cn &b)
	{
		cn c;
		c.real=(this->real*b.real)-(this->imaginary*b.imaginary);
		c.imaginary=(this->imaginary*b.real)+(this->real*b.imaginary);
		return c;
	}
		
};


int main(int argv, char *argc[])
{
	cn i,j,k;		
	cout << "Enter the value of imaginary part for first complex number:" << endl;
	cin >> i.real;
	cout << "Enter the value of imaginary part for first complex number:" << endl;
	cin >> i.imaginary;
	cout << "\nEnter the value of real part for second complex number:" << endl;
	cin >> j.real;
	cout << "Enter the value of imaginary part for second complex number:" << endl;
	cin >> j.imaginary;
	cout << "\nFirst complex number: "<<i.real <<" + (" <<i.imaginary << ")i" << endl;
	cout << "Second complex number: "<<j.real <<" + (" <<j.imaginary << ")i" << endl;
	k=i+j;
	cout << "\n\nAddition of the two complex numbers: " <<k.real <<" + (" << k.imaginary << ")i" << endl;
	k=i-j;
	cout << "Subtraction of the two complex numbers: " <<k.real <<" + (" << k.imaginary << ")i" << endl;
	k=i*j;
	cout << "Multilplication of the two complex numbers: " <<k.real <<" + (" << k.imaginary << ")i" << endl;
	return 0;
}
	



	
