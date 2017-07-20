#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
		
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);

		ll l,h;
		ll current;

		pair <ll, unsigned long long> maximum;

		while(cin >> l >> h && !(l == 0 && h == 0))
		{
			maximum.first = -1;
			maximum.second = 0;
			for(int i = min(l,h); i <= max(l,h); i++)
			{
				current = i;
				unsigned long long cont = 0;

				while(current >= 1)
				{
					cont ++;
					if(current %2 == 0)
						current /= 2;
					else current = 3*current + 1;
					if(current == 1) break;
				}
				if(cont > maximum.second)
				{
					maximum.second = cont;
					maximum.first = i;
				}
			}
			cout << "Between " << min(l,h) << " and " << max(l,h) << ", " << maximum.first << " generates the longest sequence of " << maximum.second <<" values." << '\n';
		}


	return 0;
}