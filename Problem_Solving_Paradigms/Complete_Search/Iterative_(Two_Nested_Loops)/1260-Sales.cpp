#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t,n;
	cin >> t;

	while(t--)
	{
		cin >> n;
		vector <int> numbers(n);
		for(int i = 0; i < n; i++)
			cin >> numbers[i];
		int sum = 0;
		for(int i = 0; i < n; i++)
		{
			int current = numbers[i];
			for(int j = 0; j < i; j++)
				if(current >= numbers[j])	
					sum ++;
		}
		cout << sum << '\n';
	}

	return 0;
}