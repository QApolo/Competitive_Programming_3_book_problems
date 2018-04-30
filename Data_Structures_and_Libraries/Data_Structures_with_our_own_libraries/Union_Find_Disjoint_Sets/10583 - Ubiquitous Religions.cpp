#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vi;
class UnionFind {
private:
  vi p, rank, setSize;
  int numSets;
public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) {
    if (!isSameSet(i, j)) { numSets--;
    int x = findSet(i), y = findSet(j);
    if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
    else                   { p[x] = y; setSize[y] += setSize[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
};
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	int index = 1;
	while(cin >> n >> m && m && n)
	{
		cout << "Case " << index++ << ": ";
		UnionFind uf(n );
		int r, k;
		for(int i = 0; i < m; i++)
		{
			cin >> r >> k;
			r--;
			k--;
			//cout << r << " " << k << endl;
			
			uf.unionSet(r, k);
		}
		cout << uf.numDisjointSets() << '\n';

	}

	return 0;
}