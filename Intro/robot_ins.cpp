//12503 robot instructions (uva)
#include <bits/stdc++.h>
using namespace std;

int leeNum()
{
	char a;
	int r=0,i=0,k=0;
	string num;
	while((a=getchar())&&a>10)
		if(a<58&&a>47)
		{
			num+=a;
			i++;
		}

	while(i)
		r+=(num[(i--)-1]-48)*pow(10,k++);
			
return r;
}

int main()
{

	int t,ni,s,k;;
	int mov[100];
	char a;
	cin>>t;

	while(t--)
	{
		cin>>ni;
		k=0,s=0;
		for(int i=0;i<ni;i++)
		{
			cin>>a;
			if(a=='L')
			{
				mov[k]=-1;
				leeNum();
			}
			else if(a=='R')
			{
				mov[k]=1;
				leeNum();
			}
			else
				mov[k]=mov[leeNum()-1];
			k++;
		}
		for(int i=0;i<k;i++)
			s+=mov[i];
		cout<<s<<'\n';
	}
return 0;
}