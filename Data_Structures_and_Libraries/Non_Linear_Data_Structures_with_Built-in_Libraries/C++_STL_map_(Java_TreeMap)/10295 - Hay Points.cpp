#include <bits/stdc++.h>

using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int m, n;
	map <string, int> salaries;
	string job, word;
	int sal;
	cin >> m >> n;
	for(int i = 0; i < m; i++)
	{
		cin >> job >> sal;
		salaries[job] = sal;
	}
	for(int i = 0; i < n; i++)
	{
		int salary = 0;
		while(cin >> word && word != ".")
			salary += salaries[word];
	
		cout << salary << '\n';
	}

	return 0;
}