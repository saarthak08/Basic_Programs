#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(int argv,char *argc[])
{
	int i;	
	time_t start,end,now;
	double total_time;
	start=clock();
	time(&now);
	srand(now);
	cout << "Five random numbers: " << endl;
	for(i=0;i<5;i++)
	{
		cout << rand()%100 << endl;
	}
	end=clock();
	total_time=((double)(end-start))/(CLOCKS_PER_SEC);
	cout << fixed << "Net running time of the program: " << total_time << endl;
	return 0;
}
	
	
