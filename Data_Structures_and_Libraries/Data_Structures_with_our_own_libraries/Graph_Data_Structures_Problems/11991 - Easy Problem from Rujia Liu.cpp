#include <bits/stdc++.h>
using namespace std;

#define MAX 1000001
typedef vector<int> vi;
typedef vector <vi> v_st;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	int current;
	v_st graph;
	while(cin >> n >> m)
	{
		graph = v_st(MAX);
		for(int i = 0; i < n; i++)
		{
			cin >> current;
			graph[current].push_back(i);
		}
		int k,v;
		for(int i = 0; i < m; i++)
		{
			cin >> k >> v;
			if(graph[v].size() < k)
				cout << '0' << '\n';
			else cout << graph[v][k-1]+1 << '\n';
		}	
	}
	return 0;	
}
