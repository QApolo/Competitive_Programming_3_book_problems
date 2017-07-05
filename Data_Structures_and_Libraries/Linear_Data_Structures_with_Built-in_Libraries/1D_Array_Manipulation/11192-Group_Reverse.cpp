#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;

	string word;

	while(cin >> n && n != 0)
	{
		cin >> word;
		int lenWord = word.length()-1;

		n = (lenWord+1)/n;
		
		int k = 0, m = n;
		while(k <= lenWord)
		{
			for(int i = m-1; i >= k; i--)
			{
				cout << word[i];
			}
			k += n;
			m += n;
		}
		cout << endl;
	}

	return 0;
}