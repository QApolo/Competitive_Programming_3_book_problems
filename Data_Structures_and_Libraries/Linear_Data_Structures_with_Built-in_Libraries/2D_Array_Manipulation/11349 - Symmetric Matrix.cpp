#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{	

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, test = 1;
	cin >> t;

	while(t--)
	{
		char a,b;
		int n;
		bool sym = true;

		cin >> a >> b >> n;

		
		vector <vector <ll> > matrix = vector <vector <ll> >(n);
		
		for(int i = 0; i < n; i++)
			matrix[i] = vector<ll>(n); 
		
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
			{
				cin >> matrix[i][j];
				if(matrix[i][j] < 0)
					sym = false;
			}	
		//if(n%2 == 0) //even matrix
		//{
			for(int i = 0; i < n; i++)
				for(int j = 0; j < n; j++)
					if(matrix[i][j] != matrix[n-i-1][n-j-1])
					{
						sym = false;
						break;
					}
			
		//}
		/*else //odd matrix
		{
			if(sym)
			{
				int mid = n/2;
				int i = 1;
				while(i <= mid)
				{
					if(matrix[mid-i][mid] != matrix[mid+i][mid]) //vertical
						sym = false;
					if(matrix[mid][mid-i] != matrix[mid][mid+i]) //horizontal
						sym = false;
					if(matrix[mid-i][mid-i] != matrix[mid+i][mid+i]) //diag izq sup- diag der inf
						sym = false;
					if(matrix[mid+i][mid-i] != matrix[mid-i][mid+i]) //diag der sup-diag izq inf
						sym = false;
					i++;
				}	
			}	
		}
		*/
		cout << "Test #" << test++<<": ";
		cout << (sym? "Symmetric.": "Non-symmetric.") << '\n';

	}
	return 0;
}