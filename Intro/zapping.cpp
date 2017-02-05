//12468
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b&&(a!=-1||b!=-1))
	{
		if(a>b)swap(a,b);
		if(abs(b-a)<abs(100-b+a))cout<<abs(b-a)<<'\n';
		else cout<<abs(100-b+a)<<'\n';	
	}
return 0;
}