#include<stdio.h>
#include<math.h>
#define PI 3.1415926
#define PRICE 30

int main()
{
	int r,h,p;
	double volume,money;
	scanf("%d%d%d",&r,&h,&p);
	volume=PI*r*r*h;
	money=volume*p*PRICE;
	printf("The volume of the Cylinder is %lf\nThe price is %lf$\n",volume,money);
	return 0;
}