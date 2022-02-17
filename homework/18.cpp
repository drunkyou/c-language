#include"stdio.h"
int gcd(int m,int n)
{
	int r;
	r=m%n;
	while(r!=0)
{
	m=n;
	n=r;
	r=m%n;
}
return n;
}
int lcm(int m,int n)
{
	return(m*n)/gcd(m,n);
}
main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",gcd(x,y));
	printf("%d\n",lcm(x,y));
}
