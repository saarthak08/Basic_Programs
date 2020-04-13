#include<iostream>
using namespace std;
int sum(int a, int b);
void print(int m,int n,int o);
int main()
{
	int c,d,f;
	cout << "Enter the numbers you want to add:" << endl;
	cin >> c >> d;
	f=sum(c,d);
	print(c,d,f);
	return 0;
} 
int sum(int a, int b)
{
	int e;
	e=a+b;
	return e;
}
void print(int m, int n, int o)
{
	cout << m << "+" << n << "=" << o << endl;
} 
