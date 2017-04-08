//packing for holiday (12372) uva
#include <stdio.h>

int main()
{
	int t,c=0;
	int l,w,h;
	scanf("%d",&t);
	int good;
	while(t--)
	{
		printf("Case %d: ",++c);
		good=1;
		scanf("%d %d %d",&l,&w,&h);
		if(l>20||w>20||h>20)good=0;
		if(!good)printf("bad\n");
		else printf("good\n");
	}	
return 0;
}