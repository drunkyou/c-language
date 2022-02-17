#include"stdio.h"
main()
{
	float a,b;
	printf("请输入美金数量：");
	scanf("%f",&a) ;
	b=a+a*0.5;
	printf("增加税率后的金额:%1f\n",b);  
}
