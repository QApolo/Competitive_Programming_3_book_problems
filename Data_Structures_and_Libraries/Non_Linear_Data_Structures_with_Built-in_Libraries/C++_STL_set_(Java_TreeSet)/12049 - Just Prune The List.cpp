#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	short t;
	int n, m, val;
	set <int> C;
	map <int,int> A, B;

	cin >> t;
	while(t--)
	{
		cin >> n >> m;

		A.clear(); B.clear();

		for(int i = 0; i < (m+n); i++)
		{
			cin >> val;
			if(i < n)
				A[val]++;
			else
				B[val]++;
			C.insert(val);
		}
		val = 0;
		for(set<int>::iterator it = C.begin(); it != C.end(); it++)
			val += max(A[*it],B[*it])-min(A[*it],B[*it]);
		cout << val << '\n';
	}
}