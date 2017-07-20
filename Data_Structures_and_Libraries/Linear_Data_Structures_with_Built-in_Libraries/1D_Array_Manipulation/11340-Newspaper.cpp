//fix problem( change map for array, to change (O(logn) to O(1)))

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t, val;
	int n,k,m;
	char cur_char;

	scanf("%d\n", &t);
	map <int,int> prices;
	while(t--)
	{

		scanf("%d\n",&k);

		//vector <int> prices(256,0);

		while(k--)
		{
			scanf("%c %d\n", &cur_char, &val);
			prices[(int)cur_char] = val;
		}

		scanf("%d\n",&m);
		
		int price = 0;
		while(m--)
		{
			while((cur_char = getchar()) != '\n' && cur_char != EOF)
				price += prices[(int)cur_char];	
		}
		printf("%d.%02d$\n",price/100, price%100);
		prices.clear();
	}
	return 0;
}