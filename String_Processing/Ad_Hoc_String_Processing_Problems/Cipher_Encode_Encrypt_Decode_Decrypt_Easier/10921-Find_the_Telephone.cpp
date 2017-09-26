#include <bits/stdc++.h>

using namespace std;

int main()
{
	int nums[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};

	string sn;

	while(cin >> sn)
	{
		for(int i = 0; i < sn.length(); i++)
		{
			if(sn[i] >=65 && sn[i] <= 90)
				cout << nums[sn[i]-65];
			else cout << sn[i];
		}
		cout << '\n';
	}	
	return 0;
}