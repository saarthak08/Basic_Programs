#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;
int main()
{
	int i=0,j=0;
	char a;
	string c;
	cout << "Enter the string:"<< endl;
	cin >> c;
	cout << "Enter the character whose frequency you want to find:"<<endl;
	cin >> a;
	while(i<20)
	{
		if(c[i]==a)
		{
			j++;
		}
	i++;	
	}
	cout << "Frequency of character \'"<< a << "\': " << j << endl;
	return 0;
}	
