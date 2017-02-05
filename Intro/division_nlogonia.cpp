//11498 uva division of nlogonia
#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int k;
	int x,y;
	int n,m;
	while(cin>>k&&k!=0)
	{
		cin>>n>>m;
		while(k--)
		{
			cin>>x>>y;
			if(x>n&&y>m)
				cout<<"NE"<<'\n';
			else if(x>n&&y<m)
				cout<<"SE"<<'\n';
			else if(x<n&&y>m)
				cout<<"NO"<<'\n';
			else if(x<n&&y<m)
				cout<<"SO"<<'\n';
			else
				cout<<"divisa"<<'\n';	
		}
	}	
return 0;
}