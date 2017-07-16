#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	short T;
	short n;

	cin >> T;
	for(short i = 1; i <= T; i++)
	{
		cout <<"Case "<< i << ": ";
		cin >> n;

		short ageCap = 0, age;
		for(short j = 0; j < n; j++)
		{
			cin >> age;
			if(j == n/2) ageCap = age;
		}
		cout << ageCap << '\n';
	}

	return 0;
}