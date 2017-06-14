//11494 - Queen
#include <bits/stdc++.h>
using namespace std;
double slope(double x1,double y1,double x2,double y2)
{
	if(x1==x2)return 0;
return (y2-y1)/(x2-x1);
}
int dis(int x1,int y1,int x2,int y2)
{
	
return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
int main()
{
	int x1,x2,y1,y2;
	double s;
	while(cin>>x1>>y1>>x2>>y2&&!(x1==0&&y1==0&&x2==0&&y2==0))
	{
		if(dis(x1,y1,x2,y2)==0)cout<<"0"<<endl;
		else
		{
			s=abs(slope(x1,y1,x2,y2));
			if(s==1||s==0)cout<<"1"<<endl;
			else cout<<"2"<<endl;
		}
	}	
return 0;
}