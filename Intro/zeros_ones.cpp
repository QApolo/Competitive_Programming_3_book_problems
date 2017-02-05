#include <bits/stdc++.h>

using namespace std;

int main()
{
	string w;
	int t,c=0;
	int i,j;
	int es;
	while(cin>>w)
	{
		cout<<"Case "<<(++c)<<":"<<'\n';
		cin>>t;
		while(t--)
		{
			cin>>i>>j;
			if(j<i)swap(i,j);
			es=1;
			for(int k=i;k<=j;k++)
				if(w[k]!=w[i]){es=0;break;}
			
			if(es)cout<<"Yes"<<'\n';
			else cout<<"No"<<'\n';
		}
	}
return 0;
}