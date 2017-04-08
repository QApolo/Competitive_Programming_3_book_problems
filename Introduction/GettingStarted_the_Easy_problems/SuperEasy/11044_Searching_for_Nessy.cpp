//11044 uva
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a,b;
	while(n--)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",(a/3)*(b/3) );
	}
return 0;
}