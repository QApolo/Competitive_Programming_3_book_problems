//12239 - Bingo!
#include <bits/stdc++.h>
using namespace std;
int main()
{	
	
	vector <int> balls;
	int n,b,i,r,k;

	while(cin >> n >> b && n && b)
	{
		int nums[92] = {0};
		k = 0;
		for(i = 0;i < b; i++)
		{
			cin >> r;
			balls.push_back(r);
		}
		for(i = 0; i < b; i++)
			for(int j = 0; j < b; j++)
				nums[abs(balls[i] - balls[j])] = 1;

		while(nums[k] != 0) k++;
		if(k-1 == n) cout<<"Y"<<endl;
		else cout << "N" << endl;
		balls.resize(0);
	}
return 0;
}