#include <bits/stdc++.h>

using namespace std;
typedef vector <int> vi;

class UnionFind
{
private:
	vi p, rank, size;
	int num_sets;
	int max_size;
public:
	UnionFind(int N)
	{
		max_size = 1;
		p.assign(N, 0);
		num_sets = N;
		rank.assign(N, 0);
		size.assign(N, 1);
		for(int i = 0; i < N; i++)
			p[i] = i;
	}
	int findSet(int i)
	{
		return (p[i] == i)? i: (p[i] = findSet(p[i])); 
	}
	bool sameSet(int i, int j)
	{
		return (findSet(i) == findSet(j));
	}
	void unionSet(int i, int j)
	{
		if(!sameSet(i, j))
		{
			num_sets --;
			int x = findSet(i), y = findSet(j);
			if(rank[x] > rank[y])
			{
				p[y] = x;
				size[x] += size[y];
				max_size = max(max_size, size[x]);
			}
			else
			{
				p[x] = y;
				size[y] += size[x];
				if(rank[y] == rank[x])
					rank[y] ++;
				max_size = max(max_size, size[y]);
			}
		}
	}
	int getMax()
	{
		return max_size;
	}
};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	int n, m;
	cin >> t;

	while(t--)
	{
		cin >> n >> m;
		UnionFind uf(n + 1);

		int r, s;
		for(int i = 0; i < m; i++)
		{
			cin >> r >> s;
			uf.unionSet(r, s);
		}
		cout << uf.getMax() << '\n';

	}

	return 0;
}