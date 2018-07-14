#include <bits/stdc++.h>

using namespace std;

int movs[8][2] = {{0,1},{1,0},{0,-1},{-1,0},{1,-1},{-1,1},{1,1},{-1,-1}};
char grid[100][100];
int m,n;
bool valid(int y, int x)
{
	if(y < 0 || y >=m || x < 0 || x>= n)
		return false;
	if(grid[y][x] == '*') return false;
	return true;
}

void dfs(int i, int j)
{
	grid[i][j] = '*';
	for(int r = 0; r < 8; r++)
	{
		int dy = i + movs[r][0], dx = j + movs[r][1];
		if(valid(dy,dx))
		{
			grid[dy][dx] = '*';
			bfs(dy,dx);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while(cin >>m >> n && m)
	{
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				cin >> grid[i][j]; 
		
		int cuenta = 0;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(grid[i][j] == '@')
				{
					cuenta++;
					dfs(i,j);
				}
			} 
		}
		cout << cuenta << '\n';
	}
	return 0;
}
