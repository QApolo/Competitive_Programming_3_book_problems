#include <bits/stdc++.h>

using namespace std;
typedef vector <int> vi;
int main()
{
	int a, c;
	vi heights;
	while(cin >> a >> c && a && c)
	{
		heights = vi(c);
		for(int i = 0; i < c; i++)
			cin >> heights[i];
		int contador = 0;
		bool space;
		for(int i = a; i >= 1; i--)
		{
			space = false;
			for(int j = 0; j < c; j++)
			{
				int current = heights[j];
				if(current < i && !space)
				{
					 contador++;
					 space = true;
				}
				else if(current >= i)
				{
					space = false;
				}
			}
		}
		cout << contador << '\n';
	}
}