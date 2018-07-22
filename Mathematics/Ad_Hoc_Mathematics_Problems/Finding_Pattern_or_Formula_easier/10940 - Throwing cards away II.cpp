#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	while(cin >> n && n)
	{
		if(n == 1) cout << "1" << '\n';
		else {
			ll res = ((n<<1LL)-(1LL<<(ll)(log2(n))+1LL));	
			cout << res << '\n';
		}

	}
	return 0;
}
/*		
		solution in parts solve it
		long long pow_to = 1LL<<(long long)log2(n);
 		result = 2*(n-pow_to) << '\n'; 
*/