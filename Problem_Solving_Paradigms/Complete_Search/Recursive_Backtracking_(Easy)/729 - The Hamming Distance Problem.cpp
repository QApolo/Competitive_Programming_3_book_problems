#include <bits/stdc++.h>
using namespace std;


int n, h;

set <string> final_numbers;
void backtrack2(string number, int pos, char c)
{
	if(pos == n)
	{
		if(count(number.begin(), number.end(), '1') == h && c == '0'){
			final_numbers.insert(number);
		}
		return;
	}
	number[pos] = c;
	backtrack2(number, pos+1, '0');
	backtrack2(number, pos+1, '1');
}
int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--)
	{
		cin >> n >> h;
		string start(n, '0');
		final_numbers.clear();
		int k = 0;
		
		backtrack2(start, k, '0');
		backtrack2(start, k, '1');
		for(auto c: final_numbers)
			cout << c << endl;
		if(t != 0)
			cout << endl;
	}

	return 0;
}
