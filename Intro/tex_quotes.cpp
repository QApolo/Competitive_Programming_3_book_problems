//UVa 00272
#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	char a;
	short abre=1;
	while((a=getchar())!=EOF)
	{
		if(a=='"')
			if(abre)
			{
				abre=0;
				cout<<"``";
			}
			else
			{
				abre=1;
				cout<<"''";
			}
		else cout<<a;
	}
return 0;
}