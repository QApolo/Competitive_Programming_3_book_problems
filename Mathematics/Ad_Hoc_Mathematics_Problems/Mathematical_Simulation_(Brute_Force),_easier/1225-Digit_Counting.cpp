#include <bits/stdc++.h>

using namespace std;


void initial(map <char,int> &numbers)
{
	for(char i = '0'; i <= '9'; i++) numbers[i] = 0;
}
string trans(int n)
{
	string ns = "";

	while(n)
	{
		ns.push_back(n%10+48);
		n /= 10;
	}
	return ns;
}
int main()
{
	short t;
	cin >> t;
	int n;

	while(t--)
	{
		map <char,int> numbers;
		initial(numbers);

		cin >> n;

		vector <string> current;
		for(int i = 1; i <= n; i++){

			current.push_back(trans(i));
		}
		for(int i = 0; i < current.size(); i++)
			for(int j = 0; j < current[i].length(); j++)
				numbers[current[i][j]]++;
		map <char,int>::iterator it;

		int size = numbers.size(), cont = 0;
		for(it = numbers.begin(); it != numbers.end() && cont<size; it++)
		{
			cout << it->second;
			if(++cont < size)				
				cout <<" ";
		}
		cout << '\n';
	}

	return 0;
}