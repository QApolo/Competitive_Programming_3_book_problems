#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	short n;

	while(cin >> n && n)
	{
		cout << n*(n+1)*(2*n+1)/6 << '\n';
	}


	return 0;
}