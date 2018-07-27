#include <bits/stdc++.h>

using namespace std;
#define VISITED 1
#define UNVISITED 0

typedef vector <int> vi; 
typedef pair<int,int> ii;

vi adjList[101];
bitset<101	> dfs_num;
vi ts;

void topoSort(int u)
{	
	dfs_num[u] = VISITED;
	for(int j = 0; j < adjList[u].size(); j++)
	{
		int v = adjList[u][j];
		if(dfs_num[v] == UNVISITED)
			topoSort(v);
	}
	ts.push_back(u);
}
int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	int a,b;

	while(cin >> n >> m && !(n == 0 && m == 0))
	{

		for(int i = 0; i < m; i++)
		{
			cin >> a >> b;
			adjList[a].push_back(b);
		}
		for(int i = 1; i <= n; i++)
			if(dfs_num[i] == UNVISITED)
				topoSort(i);
		
		for(int i = ts.size()-1; i >= 0; i--){
			cout << ts[i];
			if(i != 0) cout <<" ";
		}
		cout <<'\n';
		ts.clear();
		dfs_num.reset();
		for(int i = 1; i <= n; i++)
			adjList[i].resize(0);
	}	
	return 0;
}