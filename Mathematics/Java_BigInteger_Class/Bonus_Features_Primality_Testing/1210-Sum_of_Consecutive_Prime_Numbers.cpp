#include <bits/stdc++.h>

using namespace std;

#define MAX 10002

bitset <MAX> numbers;
vector <int> primes;
void sieve()
{
	numbers[0] = numbers[1] = true;
	for(int i = 2; i < MAX; i++)
	{
		if(!numbers[i])
		{
			primes.push_back(i);
			for(int j = i*i; j < MAX; j+= i)
				numbers[j] = true;
		}
	}

}
	
int main()
{

	int n;
	sieve();
	while(cin >> n && n)
	{
		int c = 0;
		for(int i = 0; i < primes.size();i++)
		{
			int sum = 0;
			int k = i;
			while(sum < n && k < primes.size())
			{
				sum += primes[k++];
			}
			if(sum == n) c++;
		}
		cout << c << '\n';
	}

	return 0;	
}