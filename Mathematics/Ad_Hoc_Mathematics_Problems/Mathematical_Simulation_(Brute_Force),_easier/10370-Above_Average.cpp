#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;

	cin >> t;
	vector <int> numbers;
	int r,n;
	char sign = '%';
	while(t--)
	{

		cin >> n;
		double average = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> r;
			average += r;
			numbers.push_back(r);
		}
		average /= n;
		double percentage = 0;
		for(int i = 0; i < n;i++)
			if(numbers[i] > average) percentage++;
		printf("%.3f%c\n",percentage*(double)100/(double)n,sign );

		numbers.resize(0);
	}

	return 0;
}