#include <bits/stdc++.h>
using namespace std;

int main()
{

	int a,b,c,d;
	int deg;
	int count;
	while(cin>>a>>b>>c>>d && !(a==0&&b==0&&c==0&&d==0))
	{
		a++,b++,c++,d++;
		deg=0,cout=0;

		deg=80;
		if(deg%40>b)
			deg+=(40-deg%40)+b;
		else deg+=b;
		deg+=40;
		(deg%40)>c?deg+=(40-deg&40)+b:deg+=b;
		
		/*
			40/360=n/x;
			x=n/(40*360)
		*/

			/*
			->turn the dial clockwise 2 full turns
			•
			->stop at the first number of the combination
			•
			->turn the dial counter-clockwise 1 full turn
			•
			continue turning counter-clockwise until the 2nd number is
			reached
			•
			turn the dial clockwise again until the 3rd number is reached
			•
			pull the shank and the lock will open
			*/
	}
return 0;
}