#include <bits/stdc++.h>
//uva 11364 parking
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int t,l;
	int min,max,n;

	cin>>t;
	while(t--)
	{
		min=100;
		max=-1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>l;
			if(l>max)max=l;
			if(l<min)min=l;
		}
		cout<<2*(max-min)<<'\n';
	}

return 0;
}