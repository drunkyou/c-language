#include"stdio.h"
main()
{
	int a,b,c,n;
	for(n=100;n>=100&&n<=999;n++) 
	{
	a=n/100;
	b=n/10%10;
	c=n%10;
	if(n==a*a*a+b*b*b+c*c*c)
	printf("%d\n",n);
	}
}
