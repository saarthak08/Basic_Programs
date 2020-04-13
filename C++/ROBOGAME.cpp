#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,x=0,k[51],i,j,flag=0,rr,rl;
	bool a[51];
	cin >> n;
	char s[30][51];
	while(x<n)
	{
		cin >>s[x];
		x++;
	}
	x=0;
	while(x<n)
	{
		flag=0;
		for(i=0;i<51;i++)
		{
			a[i]=false;
		}
		for(i=0;s[x][i]!='\0';i++)
		{
			if(s[x][i]!='.')
			{
				rr=i-s[x][i]+48;
				rl=i+s[x][i]-48;
				if(rr<0)
				{
					rr=0;
				}
				
				for(j=rr;j<=rl;j++)
				{	
					if(a[j]==true)
					{
						flag=1;
						break;
					}
					a[j]=true;
				}
			}
		}
		if(flag==1)
		{
			k[x]=1;
		}
		else
			k[x]=0;
		x++;	
	}
	for(x=0;x<n;x++)
	{
		if(k[x]==1)
		{
			cout << "unsafe\n";
		}
		else if(k[x]==0)
		{
			cout <<"safe\n";
		}
	}
}
	
