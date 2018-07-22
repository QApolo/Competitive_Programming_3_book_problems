#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while(cin >> n && n)
	{
		cout <<"f91("<< n <<") = ";
		if(n <= 101) cout << "91\n";
		else cout << 91+n-101 << '\n';
	}
	return 0;
}