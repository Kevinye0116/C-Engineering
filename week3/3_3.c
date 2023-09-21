#include<stdio.h>
#include<math.h>
int main()
{
	double x,y;
	scanf("%lf%lf",&x,&y);
	printf("%f\n",sin(x));
	printf("%f\n",cos(x));
	printf("%lf\n",fabs(x));
	printf("%lf\n",exp(x));
	printf("%lf\n",pow(x,y));
	return 0;
}