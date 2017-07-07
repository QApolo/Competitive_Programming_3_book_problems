
	// Problem Solving Paradigms :: Complete Search :: Iterative (One Loop, Linear Scan)
	#include <bits/stdc++.h>

	using namespace std;

	int main()
	{
		
		long long a,b,k;
		set <pair<long long, long long> > tupla;
		pair <long long, long long> aux, aux2;

		while(cin >> k)
		{
			long long count = 0;
			for(long long i = k+1; i <= 99900; i++)
			{
				a = k*i;
				b = i-k;
				if(a%b == 0)
				{
					aux.first = a/b;
					aux.second = i;
					aux2.first = aux.second;
					aux2.second = aux.first;
					if(tupla.find(aux) == tupla.end() && tupla.find(aux2) == tupla.end())
					{
						count++;
						tupla.insert(aux);			
					}
				} 
			}
			cout << count<<endl;
			set<pair<long long,long long> >::reverse_iterator i; 
			for(i = tupla.rbegin(); i != tupla.rend(); i++)
			{
				cout << "1/" << k << " = " << "1/"<<(*i).first<<" + " << "1/"<<(*i).second << endl;
			}
			tupla.clear();
		}
		return 0;
	}
