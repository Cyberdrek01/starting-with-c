#include<stdio.h>
int main( ){
    float cp, sp, p, l ;
    printf ( "\nEnter cost price and selling price: " ) ;
    scanf ( "%f %f", &cp, &sp ) ;
    p = sp - cp ;
    l = cp - sp ;
    if(p>0){
        printf ( "\nProfit = %f", p ) ;
    }
    else if(l>0){
        printf ( "\nLoss = %f", l ) ;
    }
    return 0;
} 