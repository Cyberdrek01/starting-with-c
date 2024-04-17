#include<stdio.h>

int main(){
    float radius;
    float pi=3.14;
    printf("enter the radius of circle: ");
    scanf("%f",&radius);
    printf("area of circle: %f", pi*radius*radius);
    return 0;
}