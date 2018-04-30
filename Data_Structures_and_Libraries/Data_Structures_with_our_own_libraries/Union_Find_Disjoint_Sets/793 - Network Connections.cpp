#include <bits/stdc++.h>

using namespace std;
typedef vector <int> vi;

class UnionFind {
	private:
		vi p, rank;
	public:
		UnionFind(int N)
		{ 
			rank.assign(N, 0);
			p.assign(N, 0); 
			for(int i = 0; i < N; i++) 
				p[i] = i;  
		}
		int findSet(int i) 
		{
			return (p[i] == i) ? i : (p[i] = findSet(p[i])); 
		}
		bool isSameSet(int i, int j) 
		{
			return findSet(i) == findSet(j);
		}
		void unionSet(int i, int j)
		{
			if(!isSameSet(i, j))
			{
				int x = findSet(i), y = findSet(j);
				if(rank[x] > rank[y]) 
				{
					p[y] = x;
				}
				else
				{
					p[x] = y;
					if(rank[x] == rank[y]) rank[y]++;
				}
			}
		}
};


int main()
{
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/

	int n;
	scanf("%d", &n);

	string line;

	int r, m;
	int success, unsucess;
	char c;
	while(n--)
	{
		int quant_comp;

		scanf("%d\n", &quant_comp);
		//cout << quant_comp << endl;
		success = unsucess = 0;
		UnionFind uf = UnionFind(quant_comp );

		while(getline(cin, line) && line.length() > 1) 
		{
			sscanf(line.c_str(), "%c %d %d", &c, &r, &m);
			//cout << c << " " << r << " " << m << endl;
			r--, m--;
			if(c == 'c')
			{
				uf.unionSet(r, m);
			}
			else if(c == 'q')
			{
				//cout << r << " " << m << " :" << uf.isSameSet(r, m) << '\n';
				if(uf.isSameSet(r, m)) success ++;
				else unsucess++;
			}
		}
		cout << success << "," << unsucess << '\n';

		if(n > 0)
			cout << endl;

	}

	return 0;
}