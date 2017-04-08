//11678 - Cards' Exchange
#include <bits/stdc++.h>

using namespace std;

int main()
{
	set<int> sa,sb;
	int a,b,x,c1,c2;

	vector<int> sc;
	while(cin>>a>>b&&!(a==0&&b==0))
	{
		sc.resize(0);
		c1=0;c2=0;
		for(int i=0;i<a;i++)
		{
			cin>>x;
			sa.insert(x);
		}
		for(int i=0;i<b;i++)
		{
			cin>>x;
			sb.insert(x);
		}
		set_intersection(sa.begin(),sa.end(),sb.begin(),sb.end(), back_inserter(sc));
		cout<<(min(sa.size(),sb.size())-sc.size())<<endl;
		sa.clear();
		sb.clear();	
	}
return 0;
}