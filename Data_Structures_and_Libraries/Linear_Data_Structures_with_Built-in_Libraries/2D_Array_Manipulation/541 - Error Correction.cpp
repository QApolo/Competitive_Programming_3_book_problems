#include <bits/stdc++.h>

using namespace std;
bool checkMatrix(const vector <vector <int> > &matrix)
{
	int n = matrix.size();
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum = 0;
		for(int j = 0; j < n; j++)
		{
			sum += matrix[i][j];
		}
		if(sum%2 != 0) return false;

	}
	sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum = 0;
		for(int j = 0; j < n; j++)
		{
			sum += matrix[j][i];
		}
		if(sum%2 != 0) return false;

	}
	return true;
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector <vector <int> > matrix;


	while(cin >> n && n)
	{
		matrix = vector <vector <int> >(n);
		for(int i = 0; i < n; i++)
		{
			matrix[i] = vector <int>(n);
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		}
		if(checkMatrix(matrix))
		{
			cout << "OK" << '\n';
			
		}
		else
		{
			int x,y;
			bool corrupt = true;
			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < n; j++)
				{
					matrix[i][j] = (matrix[i][j]+1)%2;
					if(checkMatrix(matrix))
					{
						corrupt = false;
						y = i, x = j;
						break;
					}
					matrix[i][j] = (matrix[i][j]+1)%2;
				}
			}
			if(corrupt)
				cout << "Corrupt" << '\n';
			else cout << "Change bit (" << y+1 << "," << x+1 << ")" << '\n';
		}
	}

	return 0;
}