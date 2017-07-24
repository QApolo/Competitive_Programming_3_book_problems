#include <bits/stdc++.h>

using namespace std;

int stringToNum(string &n)
{
	int s = 0;
	for(int j = 0; j < n.size(); j++)
	{
		s += (n[j]-48)*pow(10,n.size()-j-1);
	}	
	return s;
}
vector <int> transform(string &nums)
{	
	vector <int> t;

	string n = "";
	for(int i = 0; i < nums.size(); i++)
	{
		if(nums[i] != 32) 
		{
			n.push_back(nums[i]);
		}
		else
		{
			int s = stringToNum(n);
			t.push_back(s);	
			n = "";
		}
	}
	if(n != "") t.push_back(stringToNum(n));
	return t;
}

int main()
{	
	int n;
	scanf("%d\n",&n);

	string numbers;
	while(n--)
	{
		getline(cin,numbers);
		vector <int> separated_numbers = transform(numbers);
		int maximum = INT_MIN;
		for(int i = 0; i < separated_numbers.size(); i++)
		{
			for(int j = 1; j < separated_numbers.size(); j++)
			{
				if( i != j)
				{
					int current = __gcd(separated_numbers[i],separated_numbers[j]); 
					if(current > maximum) maximum = current;
				}
			}
		}
		cout << maximum << '\n';
	}
	return 0;
}