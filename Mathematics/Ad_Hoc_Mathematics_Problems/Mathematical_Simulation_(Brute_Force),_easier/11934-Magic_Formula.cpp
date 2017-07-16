#include <bits/stdc++.h>

using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		
	int a,b,c,d,L;
	int f, cont;

	while(cin >> a >> b >> c >> d >> L && !(a==0 && b == 0 && d == 0 && L == 0))
	{
		cont = 0;
		for(int i = 0; i <= L; i++)
		{
			f = a*i*i + b*i + c;
			if(f % d == 0) cont ++;
		}

		cout << cont << '\n';
	}

	return 0;
}