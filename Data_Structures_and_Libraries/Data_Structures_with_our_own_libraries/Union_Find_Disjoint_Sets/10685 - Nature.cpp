#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vi;
class UnionFind
{
private:
	vi p, rank, size;
	int total;
	int maximum;
public:
	UnionFind(int N)
	{
		maximum = 1;
		total = N;
		p.assign(N, 0);
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
		return findSet(i) == findSet(j);
	}
	void unionSet(int i, int j)
	{
		if(!sameSet(i, j))
		{
			total --;
			int x = findSet(i), y = findSet(j);
			if(rank[x] > rank[y])
			{
				p[y] = p[x];
				size[x] += size[y];
				maximum = max(maximum, size[x]);
			}
			else
			{
				p[x] = p[y];
				size[y]  += size[x];
				maximum = max(maximum, size[y]);
				if(rank[x] == rank[y])
				{
					rank[y] ++;
				}
			}

		}
	}
	int getMax()
	{
		return maximum;
	}
};

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map <string, int> mapping;
	int c, r;
	string w, w2;
	while((cin >> c >> r) && !(c == 0 && r == 0))
	{
		int index = 0;		
		for(int i = 0; i < c; i++)
		{	
			cin >> w;
			mapping[w] = index++;
		}
		UnionFind uf(c);
		for(int j = 0; j < r; j++)
		{	
			cin >> w >> w2;
			uf.unionSet(mapping[w], mapping[w2]);
		}
		cout << uf.getMax() << '\n';
		mapping.clear();
		getline(cin, w);
	}
	return 0;
}