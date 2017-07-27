#include <bits/stdc++.h>

using namespace std;

int main()
{
	string current;
	vector <string> encoding;
	bool inmediatly;
	int r = 0;
	while(cin >> current)
	{
		if(current == "9")
		{
			r++;
			inmediatly = true;
			for(int i = 0; i < encoding.size(); i++)
				for(int j = i+1; j < encoding.size(); j++)
				{
					string first = encoding[i], second = encoding[j];
					int c = 0;
					
					for(int k = 0; k < min(first.size(),second.size()); k++)
						if(first[k] == second[k]) c++;
					if(c == min(first.size(),second.size()) ) inmediatly = false;
				}

			encoding.resize(0);
			cout << "Set " << r;
			if(inmediatly) cout << " is immediately decodable" << endl;
			else cout << " is not immediately decodable" << endl;
		}	
		else
			encoding.push_back(current);
	}
	return 0;
}