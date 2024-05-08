#include<stdio.h>
int main(){
	float bp, da, hra, grpay;
	printf("Enter the basic pay of Ramesh: \n");
	scanf("%f", &bp);
	da=0.4*bp;
	hra=0.2*bp;
	grpay=bp+da+hra;
	printf("Basic salary of Ramesh: %f\n",bp);
	printf("Dearness allowance salary of Ramesh: %f\n",da);
	printf("Home rate allowance of Ramesh: %f\n",hra);
	printf("Gross pay of Ramesh: %f\n",grpay);
	return 0;
}