#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	char esp;
	int r = 0;
	while(n--)
	{
		
		cout << "Case "<< ++r << ": ";
		vector <string> cartas(52);
		for(int i = 0; i < 52; i++)
		{	
			cin >> cartas[i];
		}
		int y = 0, times = 3, available = 26;
		while(times--)
		{
			int ccard;
			if(cartas[available][0] >= '1' && cartas [available][1] <= '9')
				ccard = cartas[available][0] - 48;
			else
				ccard = 10;
			y += ccard;
			available += (10-ccard);		
		}
		if(y < 25) cout << cartas[y] << endl;
		else cout << cartas[available+(y-25)+1] <<endl;
		
	}

	return 0;
}