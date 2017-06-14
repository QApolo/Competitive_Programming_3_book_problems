//362 - 18,000 Seconds Remaining
#include <stdio.h>
#include <math.h>
int main()
{
	unsigned int tb,cb,i=1,j,sumsec;

	while(scanf("%d",&tb)&&tb)
	{
		printf("Output for data set %u, %u bytes:\n",i++,tb );
		j=1,sumsec=0;

		while(tb)
		{
			scanf("%u",&cb);
			sumsec+=cb;
			tb-=cb;
			if((j++)%5==0)
			{
				printf("   Time remaining: ");
				if(sumsec==0)printf("stalled\n");
				else
				{	
					printf("%u seconds\n", (int)ceil(tb*5.0/sumsec) );
					sumsec=0;
				}
			}
		}
		printf("Total time: %u seconds\n\n",j-1 );
	}

return 0;
}