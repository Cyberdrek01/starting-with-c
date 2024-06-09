#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the side of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a==b&&a!=c) || (a==c&&a!=b) || (b==c&&b!=a)){
        printf("It is isosceles triangle");
    }
    else if(a==b&& b==c){
        printf("It is a equilateral triangle");
    }
    int d=a*a,e=b*b,f=c*c;
    if(d==(e+f)||e==(d+f)||f==(d+e)){
        printf("It is right angle triangle");
    }
    else if(a!=b && b!=c && a!=c){
        printf("It is a scalene triangle");
    }
    return 0;
}