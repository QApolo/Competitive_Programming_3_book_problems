//12015 - Google is Feeling Lucky
#include <bits/stdc++.h>

using namespace std;

struct pval
{
	string url;
	int val;
};
typedef struct pval pval;

bool acompare(pval lhs, pval rhs) { return lhs.val > rhs.val; }

int main()
{
	int t,may,k;
	pval sitios[10];
	int r=0;
	cin>>t;

	while(t--)
	{
		cout<<"Case #"<<++r<<":"<<'\n';
		for(int i=0;i<10;i++)
			cin>>sitios[i].url>>sitios[i].val;
		sort(sitios,sitios+10,acompare);

		k=0;
		may=sitios[0].val;
		while(may==sitios[k].val)
			cout<<sitios[k++].url<<'\n';

	}

return 0;
}