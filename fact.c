#include<stdio.h>
int main(){
    int num,i=1,n;
    printf("Enter the number: ");
    scanf("%d",&num);
    n=num;
    while(num!=0){
        i=i*num;
        num=num-1;
    }
    printf("The factorial for %d is %d",n,i);
}