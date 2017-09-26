#include <bits/stdc++.h>

using namespace std;
vector <string> split(string word)
{
	vector <string> words;
	string newword = "";
	for(int i = 0; i < word.length(); i++)
	{
		if(word[i] == 32)
		{
			words.push_back(newword);
			newword = "";
		}else
			newword.push_back(word[i]);
	}
	words.push_back(newword);
	return words;
}
string rev(string w1)
{
	string w2 = "";
	for(int i = w1.length()-1; i >= 0; i--)
		w2.push_back(w1[i]);
	return w2;
}
int main()
{

	string word;

	while(getline(cin,word))
	{
		vector <string> words = split(word);
		string end = " ";
		for(int i = 0; i < words.size(); i++)
		{
			if(i == words.size()-1) end = "";
			cout << rev(words[i]) << end;
		}
		cout << '\n';
	}
	return 0;
}