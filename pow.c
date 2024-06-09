#include<stdio.h>
#include<math.h>
int main(){
	int a,b,pw;
	printf("Enter the number and the power number: ");
	scanf("%d %d",&a,&b);
	pw=pow(a,b);
	printf("The value of one number raised to the power of another is %d",pw);
	return 0;
}
