#include<stdio.h>
#include<conio.h>
int main(){
    int n,num,r_num=0;
    printf("enter the number: ");
    scanf("%f",&num);
    n=num;
    while(num!=0)
    {
        r_num = r_num * 10;

        r_num = num % 10 + r_num;

        num = num/10;
    }
    printf("Reversed number of %d is %d \n",n,r_num);
    if(n==r_num){
        printf("Input number and reversed number are equal");

    }
    else{
        printf("Input number and reverse number are not equal");
    }
    return 0;
}