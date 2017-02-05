//12289 - One-Two-Three
#include <bits/stdc++.h>
using namespace std;
int getn(string s);

int comp(string num)
{
	int dif,i,k=3,men=5,pos=0;
	string nums[3]={"one","two","three"};
	int dfnum[3]={0,0,0};
	while(k--)
		for(i=0;i<num.size();i++)
			if(nums[k][i]!=num[i])dfnum[k]++;
	for(i=0;i<3;i++)
		if(dfnum[i]<men){men=dfnum[i],pos=i;}
return getn(nums[pos]);
}
int getn(string s)
{
	if(s[0]=='o')return 1;
	if(s[0]=='t'&&s.size()==3)return 2;
return 3;
}

int main()
{
	int t;
	string num;
	cin>>t;
	while(t--)
	{
		cin>>num;
		cout<<comp(num)<<'\n';
	}
return 0;
}