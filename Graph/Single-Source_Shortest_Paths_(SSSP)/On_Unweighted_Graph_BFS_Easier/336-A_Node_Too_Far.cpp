#include <bits/stdc++.h>

using namespace std;
int nc;

int BFS(map <int,vector<int> > &adj, int &start, int &steps)
{
	queue <pair<int,int> > Q;
	map <int,bool> visited;

	int q;
	int current_steps;

	Q.push(make_pair(start,0));
	visited[start] = true;

	int c = 1;

	while(!Q.empty())
	{
		q = Q.front().first;
		current_steps = Q.front().second;

		Q.pop();

		for(int i = 0; i < adj[q].size(); i++) 
		{
			if(!visited[ adj[q][i] ] )
			{
				visited[adj[q][i]] = true;
				if(steps > current_steps ) c++;
					
				Q.push( make_pair(adj[q][i] , current_steps + 1) );
			}
		}
	}
	return c;
}
int main()
{

	int n1,n2;

	int start, ttl;
	int caseN = 0;

	while(cin >> nc && nc != 0)
	{
		map <int,vector<int> > adj;
		set <int> total;

		for(int i = 0; i < nc; i++)
		{
			cin >> n1 >> n2;
			adj[n1].push_back(n2);
			adj[n2].push_back(n1);
			total.insert(n1);
			total.insert(n2);
		}

		while(cin >> start >> ttl && !(start == 0 && ttl == 0))
		{	
			cout << "Case " << ++caseN << ": ";
			cout << total.size() - BFS(adj,start,ttl)<< " nodes not reachable from node " << start <<" with TTL = "<< ttl << ".\n";
		}
	}
	return 0;
}