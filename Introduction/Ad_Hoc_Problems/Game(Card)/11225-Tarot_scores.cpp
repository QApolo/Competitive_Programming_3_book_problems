#include <bits/stdc++.h>

using namespace std;

int main()
{

	short n,m;
	short current = 1;
	int pointsToAchieve;

	cin >> n;

	while(n--)
	{
		cout << "Hand #" << current++ <<'\n';
		cin >> m;

		float s = 0;
		short oudlers = 0;

		while(m--)
		{
			string card1;
			cin >> card1;

			
			string con, type;

			if(card1 == "fool")
			{
				s += 4.5;
				oudlers ++;
			}
			else
			{
				cin >> 	con >> type;
				if(card1 == "one" || card1 == "twenty-one")
				{
					if(type == "trumps")
					{
						oudlers ++;
						s += 4.5;
					}
				}
				else if(card1 == "king")
				{
					s += 4.5;
				}
				else if(card1 == "queen")
				{
					s += 3.5;
				}
				else if(card1 == "knight")
				{
					s += 2.5;
				}
				else if(card1 == "jack")
				{
					s += 1.5;
				}
				else s+= 0.5;
			}
		}	
		switch(oudlers)
		{
			case 0:
				pointsToAchieve = 56;
			break;

			case 1:
				pointsToAchieve = 51;
			break;

			case 2:
				pointsToAchieve = 41;
			break;

			case 3:
				pointsToAchieve = 36;
			break;
		}
		if(s >= pointsToAchieve)
		{
			cout << "Game won by "<< s - pointsToAchieve << " point(s)."<<'\n';
		}
		else
		{
			cout << "Game lost by "<< pointsToAchieve - s << " point(s)."<<'\n';
		}
		if(n != 0) cout << '\n';
	}

	return 0;
}