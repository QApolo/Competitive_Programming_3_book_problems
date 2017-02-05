//horror dash uva 11799
#include <stdio.h>


int main()
{
	int t;
	int n,i;
	scanf("%d",&t);
	int c,l,k=0;
	while(t--)
	{
		k++,c=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&l);
			if(l>c)c=l;
		}
		printf("Case %d: %d\n",k,c );
	}	
return 0;
}