//661 - Blowing Fuses
#include <iostream>
using namespace std;

int main()
{

	int n,m,c,r,cons,k=0;
	int may;
	pair <int,int> dev[22],ele;
	bool menor;
	while(cin>>n>>m>>c&&!(n==0&&m==0&&n==0))
	{
		menor=true;
		cons=0,may=0;
		for(int i=0;i<n;i++)
		{
			cin>>r;
			ele.first=0;
			ele.second=r;
			dev[i]=ele;
		}
		
		for(int i=0;i<m;i++)
		{
			cin>>r;
			r--;
			if(dev[r].first==0)
			{	
				dev[r].first=1;
				cons+=dev[r].second;
				if(cons>c)menor=false;
			}
			else
			{
				dev[r].first=0;
				cons-=dev[r].second;
			}
			may=max(may,cons);
		}
		cout<<"Sequence "<<(++k)<<endl;
		if(cons>c&&!menor||may>c)
		{
			cout<<"Fuse was blown."<<endl<<endl;
		}
		else
		{
			cout<<"Fuse was not blown."<<endl;
			cout<<"Maximal power consumption was "<<may<<" amperes."<<endl<<endl;
		}
	}
return 0;
}