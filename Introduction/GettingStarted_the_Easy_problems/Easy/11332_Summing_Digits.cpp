//summing digits (uva) 	11332
#include <bits/stdc++.h>

using namespace std;

char slt='\n';
int dig(int x)
{
	if(x%10==x)return x;
	int s=0,k=0;
	while(x%10!=x)
	{
		s+=(x%10)*pow(10,k++);
		x/=10;
	}
	s+=x;
	if(s%10!=s)return dig(s);
return s;
}
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int x;
	while(cin>>x&&x!=0)
	{
		cout<<dig(x)<<'\n';
	}	
return 0;
}