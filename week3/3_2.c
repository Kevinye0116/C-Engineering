#include<stdio.h>
int main()
{
	double num;
	int a,b,c,d;
	scanf("%lf",&num);
	a=num*10+0.5;
	b=num*100+0.5;
	c=num*1000+0.5;
	d=num*10000+0.5;
	printf("%f\n",a/10.0);
	printf("%f\n",b/100.0);
	printf("%f\n",c/1000.0);
	printf("%f\n",d/10000.0);
	return 0;
}