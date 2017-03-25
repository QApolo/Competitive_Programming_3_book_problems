//621 Secret Research (uva)
#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s.size()==1)
		{
			if(s[0]=='1'||s[0]=='4')
				cout<<"+"<<'\n';
		}
		else
		{
			if (s[0]=='7'&&s[1]=='8'&&s.size()==2)
				cout<<"+"<<'\n';
			else if(s[s.size()-1]=='5'&&s[s.size()-2]=='3')
				cout<<"-"<<'\n';
			else if(s[0]=='9'&& s[s.size()-1]=='4')
				cout<<"*"<<'\n';
			else cout<<"?"<<'\n';
		}
	}
return 0;
}