#include <bits/stdc++.h>

using namespace std;

int total_digs(int n)
{
	if(n == 0) return 1;
	int c = 0;

	while(n > 0)
		n /= 10, c++;
	return c;
}

int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;

	cout << "PERFECTION OUTPUT" << '\n';
	while(cin >> n && n)
	{
		
		int t = 5-total_digs(n);
		for(int i = 0; i < t; i++)
			cout << (char)32;
		cout << n << "  ";

		int sum = 0;

		for(int i = 1; i < n; i++)
			if(n % i == 0) sum += i;
		if(sum == n) cout << "PERFECT" << '\n';
		else if(sum > n) cout << "ABUNDANT" << '\n';
		else cout << "DEFICIENT" << '\n';
	}
	cout << "END OF OUTPUT" << '\n';

	return 0;
}