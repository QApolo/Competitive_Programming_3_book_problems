//12157 uva tarrif plan
#include <stdio.h>
#include <math.h>


int cost(int p,int seg)
{
	int i=0;
	while(p*i<=seg)
		i++;
return i;
}
int main()
{
	
	int t;
	int n,i;

	scanf("%d",&t);
	i=1;
	int sm,sj;
	int p;
	while(t--)
	{
		sm=sj=0;
		printf("Case %d: ",i++ );
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			scanf("%d",&p);
			sm+=10*cost(30,p);
			sj+=15*cost(60,p);
		}

		if(sm<sj)printf("Mile %d\n",sm);
		else if(sm>sj)printf("Juice %d\n", sj);
		else printf("Mile Juice %d\n", sj);
	}	
return 0;
}