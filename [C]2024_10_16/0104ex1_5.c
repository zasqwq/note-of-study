#include <stdio.h>
main()
{
	int x,y;
	float a,b;
	a=25.985;
	b=38.123;
	x=(int)(a+b);
	y=(int)a+(int)b;
	printf("x=%d y=%d\n",x,y);
}
//x的计算是先进行浮点数的相加，再进行转换到整数后进行四舍五入，较为精准
//但y的计算先进行了浮点数到整数的转换，导致了四舍五入，a取了25，b取了38，误差较大