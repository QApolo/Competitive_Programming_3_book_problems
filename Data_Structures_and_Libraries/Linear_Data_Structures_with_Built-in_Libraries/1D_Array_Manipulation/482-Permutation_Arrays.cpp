#include <bits/stdc++.h>

using namespace std;

#define ind first
#define val second
int stringToNum(string number)
{
	int size = number.length();

	int num = 0;
	for(int i = 0; i < size; i++)
	{
		num += (number[i]-48)*pow(10,(size-i-1));
	}
	return num;
}
bool compare(pair <int,string> a, pair <int,string> b)
{
	return a.ind < b.ind;	
} 

vector <int> transform(string &s)
{
	vector <int> numbers_transformed;
	vector <string> numbers;

	string current = "";

	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] != 32)
		{
			current.push_back(s[i]);
		}
		else
		{
			numbers_transformed.push_back(stringToNum(current));
			current = "";
		}
	}
	if(current != "") numbers_transformed.push_back(stringToNum(current));
	return numbers_transformed;
}

vector <string> transform2String(string &s)
{
	vector <string> numbers;

	string current = "";

	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] != 32)
		{
			current.push_back(s[i]);
		}
		else
		{
			numbers.push_back(current);
			current = "";
		}
	}
	if(current != "") numbers.push_back(current);
	return numbers;
}
int main()
{
	int t;
	cin >> t;
	char space;
	while(t--)
	{
		scanf("%c\n",&space);
		string s_numbers;
		getline(cin,s_numbers);

		vector <int> numbers = transform(s_numbers);
		vector <pair <int,string> > array;

		string val;
		getline(cin,val);
		vector <string> values = transform2String(val);
		for(int i = 0; i < numbers.size(); i++)
		{
			array.push_back(make_pair(numbers[i],values[i]));
		}
		sort(array.begin(),array.end(),compare);
		for(int i = 0; i < array.size(); i++)
			cout << array[i].val << endl;
		if(t > 0)
		cout << endl;

	}
	return 0;
}