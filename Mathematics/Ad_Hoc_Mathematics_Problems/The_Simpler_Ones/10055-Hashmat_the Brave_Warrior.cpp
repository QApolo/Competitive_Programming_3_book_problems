#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ll a,b;

	while(cin >> a >> b)
		cout << abs(a-b) << '\n';

	return 0;
}