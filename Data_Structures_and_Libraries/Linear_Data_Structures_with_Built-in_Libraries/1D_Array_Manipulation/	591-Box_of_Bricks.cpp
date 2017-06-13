#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,nc,j=1;
	int s=0,r,c;
	vector <int> v;
	while(cin>>n&&n>0)
	{
		v.resize(0);
		s=0;
		c=0;
		cout<<"Set #"<<j++<<endl;
		nc=n;
		while(nc--)
		{
			cin>>r;
			v.push_back(r);
			s+=r;
		}
		nc=n;
		nc=s/nc;

		for(int i=0;i<v.size();i++)
		{
			while((v[i])>nc)
			{
				v[i]--;
				c++;
			}
		}
		cout<<"The minimum number of moves is "<<c<<"."<<endl<<endl;
	}
return 0;
}