#include <bits/stdc++.h>

using namespace std;

int main()
{
	float h,d,f;
	float u,advance;

	while(cin >> h >> u >> d >> f && h)
	{
		advance = 0;
		int steps = 0;
		float new_factor = f*u/100;
		while(advance >= 0 && advance < h)
		{
			steps ++;

			if(u > 0)
			advance += u;
			
			if(advance > h) break;
			advance -= d;
			
			u-= new_factor;
		}
		if(advance > h)
			cout << "success on day ";
		else cout << "failure on day ";
		cout << steps << endl;
	}
	return 0;
}