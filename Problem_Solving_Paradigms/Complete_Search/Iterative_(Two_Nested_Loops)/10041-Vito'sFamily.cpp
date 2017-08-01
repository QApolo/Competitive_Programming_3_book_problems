#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,r;

	cin >> t;

	while(t--)
	{

		cin >> r;
		vector <int> numbers(r);
		for(int i = 0; i < r; i++)
			cin >> numbers[i];

		int sum = 0, current;
		int minimum = INT_MAX;
		for(int i = 0; i < r; i++)
		{
			current = numbers[i];
			sum = 0;
			for(int j = 0; j < r; j++)
				sum += abs(current-numbers[j]);
			minimum = min(sum,minimum);
		}
		cout << minimum << '\n';
			
	}
}