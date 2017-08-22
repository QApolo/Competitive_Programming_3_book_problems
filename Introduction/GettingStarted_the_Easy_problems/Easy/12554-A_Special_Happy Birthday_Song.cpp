#include <bits/stdc++.h>

using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string comple_song[16]= {"Happy","birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday",
								"to", "Rujia", "Happy", "birthday", "to","you"};

	int n;
	cin >> n;

	vector <string> names(n);
	bitset <100> sung;

	for(int i = 0; i < n; i++)
		cin >> names[i];
	if(n <= 16)
	{
		int j = 0;
		while(j < 16)
		{
			cout << names[j%n] << ": " << comple_song[j] << '\n';
			j++;
		}
	}
	else
	{
		int r = 0; 
		while(r < n) r += 16;
		int j = 0;
		while(j < r)
		{
			cout << names[j%n] << ": " << comple_song[j%16] << '\n';
			j++;
		}
	}
	

	return 0;
}