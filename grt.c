#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the number: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a>b&&a>c){
        printf("%f is the greatest number",a);
    }
    else if(c>b&&c>a){
        printf("%f is the greatest number",c);
    }
    else if(a<b&&b>c){
        printf("%f is the greatest number",b);
    }
    return 0;
}