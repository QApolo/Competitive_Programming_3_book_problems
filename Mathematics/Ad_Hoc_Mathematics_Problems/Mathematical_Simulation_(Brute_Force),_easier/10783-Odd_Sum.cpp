#include <bits/stdc++.h>

using namespace std;

#define forn(i,a,b) for(i = a; i < b; i++)
int main()
{
	short t,a,b,i;
	short j;
	cin >> t;

	forn(i,1,t+1)
	{
		cout << "Case " << i << ": ";
		cin >> a >> b;

		short sum = 0;
		forn(j,a,b+1) if(j%2) sum += j;
		cout << sum << '\n';

	}


	return 0;
}