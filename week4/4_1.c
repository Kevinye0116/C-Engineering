#include<stdio.h>
int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a%b==0||b%a==0)
		printf("Yes!\n");
	else
		printf("No!\n");
	return 0;
}