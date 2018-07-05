#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,closest_sum, query,q, difference;
	vector <int> setNumbers;
	int cases = 1;
	while(cin >> n && n)
	{
		cout << "Case " << cases++ << ":"<<'\n';
		setNumbers = vector <int>(n);
		
		for(int i = 0; i < n; i++)
			cin >> setNumbers[i];
		cin >> q;
		for(int k = 0; k < q; k++)
		{
			difference = INT_MAX;
			cin >> query;
			for(int i = 0; i < n; i++)
			{	
				for(int j = i+1; j < n; j++)
				{
					int sum = setNumbers[i]+setNumbers[j];
					if(difference > (abs(sum-query)))
					{
						difference = (abs(sum-query));
						closest_sum = sum;
					}
				}
			}	
			cout << "Closest sum to " << query <<" is "<< closest_sum << "."<< '\n';
		}
	}

	return 0;
}	