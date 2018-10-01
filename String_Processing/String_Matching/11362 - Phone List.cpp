#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;

	vector <string> numbers;
	set <string> exist;
	map <string, int> mapeo;

	cin >> t;
	while(t--)
	{
		cin >> n;
		string s;
		numbers = vector <string>(n);
		exist.clear();
		int it = 0;
		while(n--)
		{
			cin >> s;
			exist.insert(s);
			numbers[it++] = s;
		}
		
		bool found = false;
		
		mapeo.clear();
		for(string a: numbers)
		{
			string copy = "";
			for(char r: a)
			{
				copy.push_back(r);
				if(exist.find(copy) != exist.end())
				{
					mapeo[copy]++;
					if(mapeo[copy] > 1){
						found = true;
						break;
					}
				}
			}
		}
		if(found)
			cout << "NO" << '\n';
		else
			cout << "YES" << '\n';
	}
	return 0;
}