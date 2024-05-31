#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("Enter the value of a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180){
        printf("It is a valid trianlge: ");
    }
    else{
        printf("It is not a valid triangle");
    }
    return 0;
}