#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

vector <char> read()
{
	vector <char> vc;
	char a=32;
	int i=0;
	getchar();
	while((a=getchar())>10)
		vc.push_back(a);
return vc;
}
int main()
{
	vector <char> vc;
	int minsp;
	int cx,cs,n;
	vector <int> sp;

	int cant=0;

	while(cin>>n&&n>0)
	{
		minsp=100000,cant=0;
		vc.resize(0);
		sp.resize(0);

		for(int i=0;i<n;i++)
		{
			vc=read();
			cs=count(vc.begin(),vc.end(),32);
			if(cs<minsp)minsp=cs;
			sp.push_back(cs);
		}
		for(int i=0;i<sp.size();i++)
			cant+=(sp[i]-minsp);

		cout<<cant<<endl;
	}
return 0;
}