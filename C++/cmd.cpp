#include<iostream>

using namespace std;

int main(int argv,char *argc[])
{
	int i;	
	cout << "Hi! To know the number of command line arguments & the commands passed, Press \"Enter\" key:" <<endl;
	getchar();	
	cout << "Number of command line arguments:" << argv << endl;
	cout << "Commands passed:" << endl;
	for(i=0;i<argv;i++)
	{
		cout << argc[i] << endl;
	}
	return 0;
}
