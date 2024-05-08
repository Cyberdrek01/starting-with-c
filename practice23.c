#include <stdio.h>
int main(){
    float km,m,f,in,cm;
    printf("Enter the distance between the two cities: ");
    scanf("%f",&km);
    printf("In kilometers: %f\n",km);
    printf("In feet: %f\n",km*3280.84);
    printf("In inch: %f\n",km*39370.1);
    printf("IN centimeter: %f\n",km*100000);
    return 0;
}