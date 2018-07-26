#include <bits/stdc++.h>

using namespace std;
set <string> dictionary;
typedef vector <string> vs;

bool isLetter(char a)
{
	if( (a >= 'a'&& a <='z') || (a >= 'A' && a <= 'Z')) return true;
	return false;
}
vs split(string &word)
{
	vs words;
	string current = "";
	for(int i = 0; i < word.length(); i++)
	{
		if(isLetter(word[i]))
			current.push_back(word[i]);
		else
		{
			words.push_back(current);
			current = "";
		}
	}
	if(current != "")
		words.push_back(current);

	return words;
}
string clearWord(string &word)
{
	string newword = "";
	for(int i = 0; i <= word.length(); i++)
	{
		if((word[i] >= 'A' && word[i] <='z') || (word[i] >= 'a' && word[i] <= 'z'))
			if(word[i] >= 'A' && word[i] <= 'Z')
				newword.push_back(word[i]+32);
			else
				newword.push_back(word[i]);
	}
	return newword;
}
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string word;
	while(cin >> word)
	{
		vs sub_words = split(word);
		for(int i = 0; i < sub_words.size(); i++)
		{
			string newword = clearWord(sub_words[i]);
			if(newword != "")
			dictionary.insert(newword);
		}
	}
	for(set <string>::iterator it = dictionary.begin(); it != dictionary.end(); it++)
		cout <<*it << '\n';
	return 0;
}