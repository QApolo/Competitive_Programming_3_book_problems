//12279 - Emoogle Balance
#include <stdio.h>

int main()
{
	
	int n;
	int t,at,i,r,k=1;
	while(scanf("%d",&n)&&n!=0)
	{	
		t=0,at=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&r);
			if(r==0)at++;
			else t++;

		}
		printf("Case %d: %d\n", k++,(t-at));
	}	
return 0;
}