//jumping mario 11764 (uva)
#include <stdio.h>

int main()
{
	int t;
	int nu[50],l,h;
	int k,n;
	scanf("%d",&t);
	int r=0;
	while(t--)
	{
		k=0,r++,
		scanf("%d\n",&n);
		while(n--)
			scanf("%d",&nu[k++]);
			
		l=0,h=0;
		for(n=1;n<k;n++)
			if(nu[n-1]<nu[n])l++;
			else if(nu[n-1]>nu[n])h++;
		printf("Case %d: %d %d\n",r,l,h );	
		
	}

}