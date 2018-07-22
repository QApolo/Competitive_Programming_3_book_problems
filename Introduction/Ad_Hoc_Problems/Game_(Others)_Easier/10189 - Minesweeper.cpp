#include <bits/stdc++.h>

using namespace std;

#define MAX 101
char matrix[MAX][MAX];
int values[MAX][MAX];
int n,m;

int movs[8][2] = {
	{1,0},
	{0,1},
	{-1,0},
	{0,-1},
	{1,-1},
	{-1,1},
	{1,1},
	{-1,-1}
};
bool valid(int y, int x)
{
	if(y < 0 || y >= n || x < 0 || x >= m) return false;
	if(matrix[y][x] != '*') return false;
	return true;
}
void analizeMatrix()
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(matrix[i][j] == '.')
			{
				for(int k = 0; k < 8; k++)
				{
					int dy = i + movs[k][0];
					int dx = j + movs[k][1];
					if(valid(dy,dx))
						values[i][j]++;
				}
			}
		}
	}
}
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int field_num = 1;
	while(cin >> n >> m && (m && n))
	{
		if(field_num > 1)
			cout << '\n';
		cout << "Field #" << field_num++ << ":"<<'\n';
		for(int j = 0; j < MAX; j++)
			for(int k = 0; k < MAX; k++)
				values[j][k] = 0; 

		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> matrix[i][j];

		analizeMatrix();
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(matrix[i][j] == '*')
					cout << '*';
				else
					cout << values[i][j];
			}
			cout << '\n';
		}
		
	}
	


	return 0;
}