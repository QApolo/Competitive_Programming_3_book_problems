#include <bits/stdc++.h>

using namespace std;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int t,k,s;
	cin>>t;
	string a;
	s=0;
	while(t--)
	{
		cin>>a;
		k=0;
		if(a[0]=='d')
			cin>>k;
		else cout<<s<<'\n';
		s+=k;
	}
return 0;
}