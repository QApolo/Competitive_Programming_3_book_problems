//11942 - Lumberjack Sequencing
#include <stdio.h>

int main()
{
	int n,ord;
	int a,b,i,crec,c,d;
	scanf("%d",&n);
	printf("Lumberjacks:\n");
	while(n--)
	{
		ord=1,crec=1;
		d=0,c=0;
		scanf("%d",&a);
		for(i=0;i<9;i++)
		{
			scanf("%d",&b);
			if(a>b)c++;
			else d++;
			a=b;
		}
		if((c==0&&d==9)||(c==9&&d==0))printf("Ordered\n");
		else printf("Unordered\n");
	}	
return 0;
}