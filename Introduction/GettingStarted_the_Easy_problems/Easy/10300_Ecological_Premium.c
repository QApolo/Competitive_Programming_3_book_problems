#include <stdio.h>

int main()
{
	int n;
	int f;
	int s,a,v;
	int calc;
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			calc = 0;
			scanf("%d",&f);
			while(f--)
			{
				scanf("%d %d %d",&s,&a,&v);
				calc += (s*v);
			}
			printf("%d\n",calc);
		}
	}
	return 0;
}