#include<iostream>

using namespace std;

void display_arr(int *a,int *b);
int main()
{
	int i,c[6];
	cout << "Enter five numbers of the array:" << endl;
	for(i=0;i<5;i++)
	{
		cin >> c[i];
	}
	display_arr((&c[0]),&(*(c+4)));
}

void display_arr(int *a,int *b)
{
	int *p;	
	cout << "Press \"Enter\" key to print the entered numbers:";
	getchar();
	getchar();
	for(p=a;p<=b;p++)
	{
		cout << *p << endl;
	}
}
		 
