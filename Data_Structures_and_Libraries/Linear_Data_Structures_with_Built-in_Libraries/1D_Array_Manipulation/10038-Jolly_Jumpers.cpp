//10038 - Jolly Jumpers
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int number;
	int last=0,i,dif;
	int difs[3000];

	while(cin>>n)
	{
		for(i=0;i<3000;i++)difs[i]=0;

		for(i=0;i<n;i++)
		{
			cin>>number;
			dif=abs(number-last);
			last=number;
			if(dif>0&&dif<n)
				difs[dif]=1;
		}
		if(count(difs,difs+i,1)==n-1)
			cout<<"Jolly"<<endl;
		else cout<<"Not jolly"<<endl;
	}
return 0;
}