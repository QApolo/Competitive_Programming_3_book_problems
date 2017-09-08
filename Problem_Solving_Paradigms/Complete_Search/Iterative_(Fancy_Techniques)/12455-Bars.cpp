#include <bits/stdc++.h>

using namespace std;

int t,n,p;
vector <int> bars;

bool backtrack(int sum,int index)
{
	if(sum == n ) return true;
	if(index >= p || sum > n ) return false;

	bool status = false;

	for(int i = index; i < p && !status; i++)
	{
		status = backtrack(sum + bars[i], i+1 );
	}
	return status;
}

int main()
{
	cin >> t;
	

	while(t--)
	{
		cin >> n; //length bar
		cin >> p; //bars
		
		bars = vector <int>(p);

		for(int i = 0; i < p; i++)
			cin >> bars[i];
		if(backtrack(0,0))
		{
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;


		
	}

	

	return 0;
}