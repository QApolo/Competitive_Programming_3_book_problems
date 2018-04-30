#include <bits/stdc++.h>

using namespace std;

int main()
{	

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	map <int,int> counter;
	vector <int> order;

	while(cin >> n)
	{
		if(counter[n] == 0)
			order.push_back(n);
		counter[n]++;
	}
	for(int i = 0; i < order.size(); i++)
		cout << order[i] << " "<< counter[order[i]]<< '\n';
	return 0;
}