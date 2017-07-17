#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n,k;
	ll c;

	while(cin >> n >> k)
	{
		c = n;
		while(n >= k)
		{
			c += (n/k);
			if(n == k) break;
			n = n/k+(n%k); 
		}

		cout << c << '\n';
	}
	return 0;
}