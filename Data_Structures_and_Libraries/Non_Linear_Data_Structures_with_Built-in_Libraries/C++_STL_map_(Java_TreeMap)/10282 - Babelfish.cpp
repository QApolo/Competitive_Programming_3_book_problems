#include <bits/stdc++.h>

using namespace std;

string wa,wb;
string current;

void split_word()
{
	wa ="", wb = "";
	int i;
	for(i = 0; current[i] != 32 && i < current.length(); i++)
		wa.push_back(current[i]);
	for(int j = i+1; j < current.length(); j++)
		wb.push_back(current[j]);
}
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map <string, string> dictionary;

	while(getline(cin,current) && current != "")
	{
		split_word();
		dictionary[wb] = wa;
	}

	while(cin >> current)
	{
		if(dictionary[current] != "")
			cout << dictionary[current] << endl;
		else cout << "eh" << endl;
	}
	return 0;
}