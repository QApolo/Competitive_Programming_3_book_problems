#include <iostream>
using namespace std;

int main()
{
	string s;
	int t = 0;

	while(cin >> s && s[0] != '*')
	{
		cout << "Case "<< ++t <<":";
		if(s == "Hajj")
			cout<<" Hajj-e-Akbar" << endl;
		else cout<<" Hajj-e-Asghar" <<endl;
	}
return 0;
}