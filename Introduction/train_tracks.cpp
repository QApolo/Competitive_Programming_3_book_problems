//11586 - Train Tracks (uva)

#include <bits/stdc++.h>
using namespace std;

void leetrack(string *s)
{
	char a;
	while((a=getchar())>10)
	{
		if(a!=32)
		(*s).push_back(a);
	}
}

int posible(string s)
{
	int cm=0,cf=0;
	for(int i=0;i<s.size();i++)
		if(s[i]=='M')cm++;
		else cf++;
	if(cm==1)return 0;
	if(cf!=cm)return 0;
return 1;
}
int main()
{
		
	int t;
	string whltrck;
	cin>>t;
	char a=32;	
	while(t--)
	{
		
		while((a=getchar())>10)
		{
			whltrck="";
			whltrck.push_back(a);
			leetrack(&whltrck);
			if(posible(whltrck))
				cout<<"LOOP"<<endl;
			else cout<<"NO LOOP"<<endl;
		}
		
	}
}