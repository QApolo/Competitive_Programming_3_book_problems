#include <bits/stdc++.h>

using namespace std;

bool hasRepeated(short n)
{
	std::vector<int> arr(10,0);
	while(n)
	{
		arr[n%10] ++;
		if(arr[n%10] > 1) return true;
		n /= 10;
	}
return false;
}

int main()
{


	unsigned short n,m, cont;

	while(cin >> n >> m)
	{
		cont = 0;
		for(short j = n; j <= m; j++)
			if(!hasRepeated(j)) cont++;
		cout << cont << '\n';
	}


	return 0;
}