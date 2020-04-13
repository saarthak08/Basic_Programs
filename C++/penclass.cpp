#include<iostream>
#include"Pen.h"

using namespace std;

int main(int argc, char *argv[])
{
	Pen fp,wp;
	string a;
	fp.InkColor=blue;
	fp.ShellColor=clear;
	fp.CapColor=black;
	fp.Style=ballpoint;
	fp.Brand="Pilot";
	fp.length=6;
	fp.inkLevelPercent=90;
	wp.InkColor=blue;
	wp.ShellColor=red;
	wp.CapColor=black;
	wp.Style=felt_trip;
	wp.Brand="Acme Special";
	wp.inkLevelPercent=100;
	wp.length=3.5;
	cout << "This is my favourite pen" << endl;
	cout << "Color:" << fp.InkColor << endl;
	cout << "Brand:" << fp.Brand << endl;
	cout << "Ink Level:" << fp.inkLevelPercent << "%" << endl;
	cout<< "Enter the text:" << endl;
	getline(cin,a);
	fp.write_on_paper(a);
	cout << "Ink Level:" << fp.inkLevelPercent << "%" << endl;
	return 0;
}
