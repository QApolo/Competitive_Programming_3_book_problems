#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t,n,c,h,p;
	cin >> t;

	while(t--)
	{
		cin >> n;
		cin >> p;
		c = 0;
		
		set <int> days;
		for(int i = 0; i < p; i++)
		{
			cin >> h;
			for(int j = 1; j <= n; j++)
				if(j%h == 0 && ((j+1)%7 != 0) && j%7 != 0) days.insert(j);
		}
		cout << days.size() << '\n';
	}
	return 0;
}