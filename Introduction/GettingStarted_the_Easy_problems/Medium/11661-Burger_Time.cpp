#include <bits/stdc++.h>

using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int l;
	cin >> l;
	while(l)
	{
		int k = l;
		int distance = 0;
		int minimumDistance = 2000000;
		char lastRead = 32;

		while(k--)
		{
			char c;
			cin >> c;
			if(c == 'Z') minimumDistance = 0;
			else
			{
				if(c == 'D')
				{	
					if(lastRead == 'R')
					{
						if(distance < minimumDistance)
						{
							minimumDistance = distance;
						}
						distance = 0;
					}
					else distance = 0;
					lastRead = c;
				}
				else if(c == 'R')
				{
					if(lastRead == 'D')
					{
						if(distance < minimumDistance)
						{
							minimumDistance = distance;
						}
						distance = 0;
					} else distance = 0;
					lastRead = c;
				}
			}
			distance ++;
		}
		cout << minimumDistance << endl;
		cin >> l;	
	}	

	return 0;
}