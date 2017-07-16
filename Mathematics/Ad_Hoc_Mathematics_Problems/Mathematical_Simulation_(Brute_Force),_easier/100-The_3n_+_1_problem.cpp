//Mathematics/Ad_Hoc_Mathematics_Problems/Mathematical_Simulation_(Brute_Force),_easier
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long ci, cj;
    long count1, maximum, k;

    while(cin >> ci >> cj)
    {
    	cout << ci << " " << cj << " "; 
    	count1 = 1, maximum = 0;


    	for(long r = min(ci,cj); r <= max(ci,cj); r++)
    	{
    		k = r;
    		count1 = 0;
	    	while(k != 1)
            {
	    		if(k % 2 != 0)
	    			k = 3*k+1;
	    		else k /= 2;
	    		count1 ++;
	    	}
	    	
	    	maximum = max(maximum,count1);	
    	}
    	cout << maximum+1 << '\n';
    }
	return 0;
}