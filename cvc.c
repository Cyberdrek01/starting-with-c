// #include<stdio.h>
// int main(){
//     float a,b;
//     printf("Enter two numbers: ");
//     scanf("%f %f",&a,&b);
//     float Q=a/b;
//     printf("The quotient will be: %f",Q);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     float a,b;
//     printf("Enter two numbers: ");
//     scanf("%f %f",&a,&b);
//     if (a>b)
//     {
//         printf("a is max");
//     }
//     else{printf("b is max");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    int I=1;
    int Sum=0;
    while (I<=N)
    {
        Sum=Sum+I;
        printf(" The sum is: %d \n",Sum);
        I++;
    }
    return 0;
}
    