#include"stdio.h"
main()
{
	int a[10],i,sum=0,n=0;
	  for(i=0;i<10;i++)
	{
	   scanf("%d",a[i]);
    }
    for(i=0;i<10;i++)
    {
	sum=sum+a[i];
	if(a[i]>=60)
	n++;
    
    }
    printf("平均数数为%d",sum/10);
}
