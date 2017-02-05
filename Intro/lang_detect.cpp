#include <bits/stdc++.h>

using namespace std;

int comp(string a,string b)
{
	int l=a.length();
	if(l!=b.length())return 0;
	for(int i=0;i<l;i++)
		if(a[i]!=b[i])return 0;
return 1;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int c=0;
	string w;

	while(cin>>w&&!comp(w,"#"))
	{
		c++;
		if(comp(w,"HELLO"))
			cout<<"Case "<<c<<": "<<"ENGLISH"<<'\n';
		else if(comp(w,"HALLO"))
			cout<<"Case "<<c<<": "<<"GERMAN"<<'\n';
		else if(comp(w,"HOLA"))
			cout<<"Case "<<c<<": "<<"SPANISH"<<'\n';
		else if(comp(w,"BONJOUR"))
			cout<<"Case "<<c<<": "<<"FRENCH"<<'\n';
		else if(comp(w,"CIAO"))
			cout<<"Case "<<c<<": "<<"ITALIAN"<<'\n';
		else if(comp(w,"ZDRAVSTVUJTE"))
			cout<<"Case "<<c<<": "<<"RUSSIAN"<<'\n';
		else cout<<"Case "<<c<<": "<<"UNKNOWN"<<'\n';
	}
return 0;
}

