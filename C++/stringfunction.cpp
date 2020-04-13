#include<iostream>
#include<time.h>

using namespace std;
int main()
{
	double total;
	clock_t start,end;
	start=clock();	
	string a,b;
	char c;
	int x,y,z;
	cout << "Enter a string:" << endl;
	getline(cin,a);
	cout<< "Entered string: " << a << endl<<endl;
	cout << "Press" << endl << "\'1\' for Insertion" << endl << "\'2\' for Erase" << endl << "\'3\' for Replacement" <<endl<<endl;
	cin >> x;
	k:
	if(x==1)
	{
		cout << "Enter the position where to insert:" << endl;
		cin >> y;
		cout << "Enter the string you want to insert:" <<endl;
		getline(cin,b);
		getline(cin,b);
		a.insert(y,b);
		cout << "String after insertion:" << endl<< a << endl;
	}
	else if(x==2)
	{
		cout << "Enter the position from which you want to insert:" << endl;
		cin >> y;
		cout << "Enter the number of characters you want to erase:" << endl;
		cin >> z;
		a.erase(y,z);
		cout << "String after erasing:" <<endl << a << endl;
	}
	else if(x==3)
	{
		cout << "Enter the position from which you want to replace:" << endl;
		cin >> y;
		cout << "Enter the number of characters you want to replace:" << endl;
		cin >> z;
		cout << "Enter the string with which you want to replace:" << endl;
		getline(cin,b);
		getline(cin,b);
		a.replace(y,z,b);
		cout << "String after replacement:" << endl<< a << endl;
	}
	else
	{	
		cout << "Error! Invalid Input." << endl << "Please try again!" << endl;
		goto k;
	}
	end=clock();
	total=((double)(end-start))/(CLOCKS_PER_SEC);
	cout <<endl << "Total running time of the program:" << total << endl;
	return 0;
}
