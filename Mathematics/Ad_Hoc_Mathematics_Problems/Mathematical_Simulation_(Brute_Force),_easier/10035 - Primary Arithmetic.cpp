#include <bits/stdc++.h>

using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string a,b;
	while(cin >> a >> b && !(a =="0" && b == "0"))
	{
		int la = a.length(), lb = b.length();

		if(la > lb)
		{
			string aux = a;
			a = b;
			b = aux;
		}
		la = a.length(), lb = b.length();
		string zeros = "";
		for(int i = 0; i < lb-la; i++)
			zeros.push_back('0');
		a = zeros+a;
		//cout << a << " " << b << '\n';

		int counter = 0, carry;
		carry = 0;
		for(int i = lb-1; i >= 0; i--)
		{
			int suma = carry + (a[i]-'0') + (b[i]-'0');
			carry = suma /10;
			if(carry == 1)
				counter ++;
		}
		if(counter == 0)
			cout << "No carry operation." << '\n';
		else
		{
			if(counter == 1)
				cout << counter << " carry operation."<< '\n';
			else cout << counter << " carry operations." <<'\n';	
		}
		
		
	}

	return 0;
}