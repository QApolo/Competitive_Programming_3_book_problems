//10424 - Love Calculator
#include <stdio.h>
#include <algorithm> 

using namespace std;
int rw()
{
	char a;
	int s=0;
	while((a=getchar())>10){
		//printf("%d\n",a );
		if((a>='a'&&a<='z'))
			s+=a-96;
		else if((a>='A'&&a<='Z'))
			s+=a-64;
	}
	if(a==-1)return -1;
return s;
}
int dig(int n)
{	
	if(n%10==n)return n;
	int r=0;
	while(n>0)
	{
		r+=n%10;
		n/=10;
	}
return dig(r);
}
int main()
{
	int a,b;
	while((a=rw())!=-1&&(b=rw())!=-1)
	{
		if(a==0&&b==0)printf("\n");
		else{
			if(a>b)swap(a,b);
			else if(b>a)swap(a,b);
			printf("%.2f %c\n",float(dig(a))/float(dig(b))*100,'%' );
		}
			//printf("%.2f %c\n",float(dig(b))/float(dig(a))*100,'%' );
	}
return 0;
}
