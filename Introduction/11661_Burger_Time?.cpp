//11661 - Burger Time? uva
#include <bits/stdc++.h>
using namespace std;


int main()
{
	unsigned int l,min_lon,c,rfound,dfound;
	char a;
	while(cin>>l&&l!=0)
	{
		min_lon=2000000;
		dfound=0,rfound=0,c=0;
		for(int i=0;i<l;i++)
		{
			cin>>a;
			if(a=='Z')min_lon=0;
			else if(a=='D'){
				dfound=1;
				if(!rfound)c=0;
				else
				{
					if(c<min_lon+1){
						min_lon=c+1;
						//c=0;
					}
				}
				rfound=0;
			}
			else if(a=='R')
			{
				rfound=1;
				if(!dfound)c=0;
				else
				{
					if(c<min_lon+1){
						min_lon=c+1;
						//c=0;
					}
				}
				dfound=0;
			}
			else c++;
		}
		printf("%u\n",min_lon );
	}
return 0;
}
