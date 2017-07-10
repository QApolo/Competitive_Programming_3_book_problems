#include <bits/stdc++.h>

using namespace std;

#define SIZE 1000000

bitset <SIZE> numbers;
vector <int> primes;

void sieve()
{	
	numbers[0] = numbers[1] = 1;
	for(int i = 2; i*i < SIZE; i++)
	{
		if(numbers[i] == 0)
		{	
			primes.push_back(i);
			for(int j = i*i ; j < SIZE; j += i) numbers[j] = 1;
		}		
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	sieve();
	int quant_primes = primes.size();
	int f = 0,s = 0;
	while(cin >> n && n != 0)
	{
		for(int j = 0; j < quant_primes && n > primes[j]; j++)
		{
			if(numbers[n-primes[j]] == 0)
			{
				f = primes[j];
				s = n-f;
				break;
			}
		}
		cout << n <<" = " << f << " + " << s << '\n';
	}
	return 0;
}