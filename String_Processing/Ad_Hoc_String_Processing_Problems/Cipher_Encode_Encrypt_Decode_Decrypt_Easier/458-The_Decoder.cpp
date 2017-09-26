#include <bits/stdc++.h>

using namespace std;

int main()
{

	string word;

	while(getline(cin,word))
	{
		for(int i = 0; i < word.length(); i++)
		{
			cout << (char)(word[i]-7);
		}
		cout << '\n';
	}
	return 0;
}