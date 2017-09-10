#include <bits/stdc++.h>

using namespace std;

vector <char> values;
void init()
{
	values = vector<char>(26);
	for(int i = 0; i < 26; i++) values[i] = '0';

	values['B'-65] = '1';
	values['F'-65] = '1';
	values['P'-65] = '1';
	values['V'-65] = '1';

	values['C'-65]  = values['G'-65] = values['J'-65]
	= values['K'-65] = values['Q'-65] = values['S'-65] 
	= values['X'-65] = values['Z'-65] = '2';

	values['D'-65] = values['T'-65] = '3';

	values['L'-65] = '4';
	values['M'-65] = values['N'-65] = '5';

	values['R'-65] = '6';

}
int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string word;
	string trans;
	while(cin >> word)
	{
		int len = word.length();
		init();
		string word2 = "";
		char last = 60;

		for(int i = 0; i < len; i++)
		{
			char m = word[i];
			if(m == 'A' || m == 'E' || m == 'I' || m == 'O' || m == 'U' || m == 'H' || m == 'W' || m == 'Y') {}
			else
			{
				if(values[word[i]-65] != values[last-65])
					word2.push_back(word[i]);	
			}
			last = word[i];
		}
		trans = "";
		len = word2.length();
		
		for(int i = 0; i < len; i++)
			if(values[word2[i]-65] != '0')
				trans.push_back(values[word2[i]-65]);
		cout << trans << '\n';
	}
	return 0;
}