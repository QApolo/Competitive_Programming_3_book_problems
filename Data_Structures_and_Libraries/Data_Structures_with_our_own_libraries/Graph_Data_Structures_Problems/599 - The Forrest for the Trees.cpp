#include <bits/stdc++.h>

using namespace std;

typedef pair <int,int> pii;
typedef vector <int> vi;
void dfs(int u, map <int,vi> &adjList, map <int, bool> &visited)
{
	if(visited[u]) return;
	visited[u] = true;
	for(int i = 0; i < adjList[u].size(); i++)
	{
		int v = adjList[u][i];
		if(!visited[v])
		{
			dfs(v,adjList,visited);
		}
	}
}
set<int> split(const string &line, char del)
{
	char cur;
	set<int> list1;
	for(int i = 0; i < line.length(); i++)
	{
		if(line[i] == del)
		{
			list1.insert(cur-65);
			cur = 0;
		}
		else
			cur = line[i];
	}
	if(cur != 0)
		list1.insert(cur-65);
	return list1;
}
int main()
{	

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	while(n--)
	{
		string line;
		vector <pii> pares;
		while(cin >> line && line[0] != '*')
		{
			pares.push_back(make_pair(line[1]-65,line[3]-65));
			//1,3 position from string
		}
		cin >> line;
		set<int> lista = split(line,',');
		set <int> lista_copia = lista;
		map <int,vi> adjList;
		map <int,bool> visited;

		for(int i = 0; i < pares.size(); i++)
		{
			pii current = pares[i];
			lista.erase(current.first);
			lista.erase(current.second);
			adjList[current.first].push_back(current.second);
			adjList[current.second].push_back(current.first);
		}
		int contador = 0;
		for(set <int>::iterator it = lista_copia.begin(); it != lista_copia.end(); it++)
		{
			if(!visited[*it])
			{
				contador ++;
				dfs(*it,adjList,visited);
				visited[*it] = true;
			}
		}

		cout <<"There are "<< contador-lista.size() << " tree(s) and " << lista.size() << " acorn(s)."<< endl;
	}
	return 0;
}