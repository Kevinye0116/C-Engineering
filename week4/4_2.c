#include<stdio.h>
int main(void){
	int a,b,c,d;
	printf("Please input complex number one:\nrealpart:");
	scanf("%d",&a);
	printf("imagpart:");
	scanf("%d",&b);
	printf("Please input complex number two:\nrealpart:");
	scanf("%d",&c);
	printf("imagpart:");
	scanf("%d",&d);
	printf("(%d+%di)+(%d+%di)=%d+%di\n",a,b,c,d,a+c,b+d);
	printf("(%d+%di)-(%d+%di)=%d+%di\n",a,b,c,d,a-c,b-d);
	printf("(%d+%di)*(%d+%di)=%d+%di\n",a,b,c,d,a*c-b*d,a*d+b*c);
	return 0;
}