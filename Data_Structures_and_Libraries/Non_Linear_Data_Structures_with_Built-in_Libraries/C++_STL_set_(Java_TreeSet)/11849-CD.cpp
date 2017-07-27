#include <bits/stdc++.h>

using namespace std;

#define forn(i,a,b) for(i = a; i < b; i++ )

int main()
{
	
	int n,m;
	int i,k;
	set <int> cds;
	int c;
	while(cin >> n >> m && !(m == 0 && n == 0))
	{
		c = 0;
		forn(i,0,n)
		{
			cin >> k;
			cds.insert(k);
		}
		forn(i,0,m)
		{
			cin >> k;
			if(cds.find(k) != cds.end()) c++;
		}
		cds.clear();
		cout << c << endl;
	}

	return 0;
}