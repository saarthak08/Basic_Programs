#include<iostream>
#include<string>
using namespace std;
enum Color {red,blue,green,black,clear};
enum PenStyle {ballpoint, felt_trip, fountain_pen};
class Pen
{
	public:
	Color InkColor;
	Color ShellColor;
	Color CapColor;
	PenStyle Style;
	float length;
	string Brand;
	int inkLevelPercent,i,j=0;
	
	void write_on_paper(string words)
	{
		if (inkLevelPercent<=0)
		{
			cout << "Oops! Out of ink!" << endl;
		}
		else
		{
			cout << words << endl;
			for(i=0;i<100;i++)
			{
				if(words[i]==' ')
				{
					j++;
				}
			}
				
			inkLevelPercent=inkLevelPercent-(words.length())+j;
		}
	}
	void break_in_half()
	{
		inkLevelPercent=inkLevelPercent/2;
		length=(length/2.0);
	}
	void run_out_of_ink()
	{
		inkLevelPercent=0;
	}
};
