#include <stdio.h>
int main(){
    float C,F;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&F);
    C=(F/32);
    printf("Temperature in Centigrade degree: %f",C);
    return 0;
}