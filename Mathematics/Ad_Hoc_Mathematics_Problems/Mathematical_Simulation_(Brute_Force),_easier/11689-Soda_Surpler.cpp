#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	short n;
	short e,f,c;

	cin >> n;

	while(n--)
	{
		cin >> e >> f >> c;
		int count = 0;
		int total = e+f;

		while(total >= c)
		{
			count += (total / c);
			total += total/c+ total % c;
		}
		cout << count  << endl;
	}

	return 0;
}