#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double area,s;
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%lf\n",area);
	return 0;
}