#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;

	vector <string> numbers;
	set <string> exist;

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
		
		for(string a: numbers)
		{
			string copy = "";
			for(int j = 0; j < a.length()-1; j++) //we compare every prefix, excluding the last character to avoid compare string with itself
			{
				copy.push_back(a[j]);
				if(exist.find(copy) != exist.end())
				{
					found = true;
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