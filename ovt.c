#include<stdio.h>
int main(){
    int ot,hrs,r,i=1;
    float otp;
    while(i<=10){
        printf("\nEnter the working hours of the employee: ");
        scanf("%d",&hrs);
        if(hrs>=40){
            ot=hrs-40;
            otp=ot*12;
            printf("\nThe Employee %d has got a bonus of: %f\n",i,otp);
        }
        else{
            printf("\nNo Bonus for employee no %d",i);
        }
        i++;
    }
    return 0;
}