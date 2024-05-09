#include <stdio.h>
int main(){
    float l,b,r;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f",&b);
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    printf("Area of rectangle: %f\n", l*b);
    printf("Perimeter of rectangle: %f\n", (l+b)*2);
    printf("Area of circle: %f\n", 3.14*r*r);
    printf("circumference of circle: %f\n", 2*3.14*r);
    return 0;
}