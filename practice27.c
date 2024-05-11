//finding area of a triangle if three side is given

#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    float s,area;
    printf("Enter the side of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    s=((a+b+c)/2);
    //area of the triangle
    area=sqrt(s * (s -a) * (s-b) * (s - c));
    printf("the area of triangle is: %f",area);
    return 0;
}