#include <bits/stdc++.h>

using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int V, vo;
	while(cin >> V >> vo && V && vo)
	{
		double answer = (double)V*1.0/(2.0*vo);

		int inte_answer = answer;
		double error = answer - (double)1.0*inte_answer;

		if(error == 0.5) cout << '0' << '\n';
		else if(error < 0.5) cout << inte_answer << '\n';
		else cout << inte_answer+1 << '\n';

	}
}