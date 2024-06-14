#include<stdio.h>
int main(){
    int a;
    printf("\nEnter numbers till the you want: ");
    scanf("%d",&a);
    int num=1;
    while(num<=a){
        printf("\n %d",num);
        num++;
    }
    if(num>0){
        printf("\nIt is a positive number");
    }
    else if(num<0){
        printf("\nIt is a negative number");
    }
    else if(num=0){
        printf("\nIt is a zero");
    }
    return 0;
}