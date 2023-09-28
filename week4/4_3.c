#include<stdio.h>
#include<math.h>
int main(void){
	double a,b,c,d,e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	printf("x\t\ \t|x\|\n"
		"%10.6lf\t%.2f\n"
		"%10.6lf\t%.2f\n"
		"%10.6lf\t%.2f\n"
		"%10.6lf\t%.2f\n"
		"%10.6lf\t%.2f\n",
		a,fabs(a),b,fabs(b),c,fabs(c),d,fabs(d),e,fabs(e));
	return 0;
}