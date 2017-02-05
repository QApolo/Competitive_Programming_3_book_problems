//11559 event planning uva
#include <bits/stdc++.h>

using namespace std;

struct hot
{
	long prec;
	long disp_cma[14];
};
typedef struct hot hot;

int main()
{
	long n,b,h,w,p,minb;
	hot hotel[19];
	while(cin>>n>>b>>h>>w)
	{
		minb=5000008;
		for(int i=0;i<h;i++)
		{
			cin>>hotel[i].prec;
			for(int j=0;j<w;j++)
			{
				cin>>hotel[i].disp_cma[j];	
				if(hotel[i].disp_cma[j]>=n)
					if(n*hotel[i].prec<minb)minb=n*hotel[i].prec;
			}
		}
		
		if(minb>b)cout<<"stay home"<<endl;
		else cout<<minb<<endl;
	}	
return 0;
}
