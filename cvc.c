// #include<stdio.h>
// int main(){
//     float a,b;
//     printf("Enter two numbers: ");
//     scanf("%f %f",&a,&b);
//     float Q=a/b;
//     printf("The quotient will be: %f",Q);
//     return 0;
// }

#include <stdio.h>
int main(){
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    if (a>b)
    {
        printf("a is max");
    }
    else{printf("b is max");
    }
    return 0;
}