// function and recursion

// fuction : block of code that performs particular task
// recursion: calling a function from within itself

// #include <stdio.h>
// void printHello();
// void printGoodbye();

// int main(){
//     printHello();
//     printGoodbye();
//     return 0;
// }

// void printHello(){
//     printf("Hello \n");
// }
// void printGoodbye(){
//     printf("Goodbye\n");
// }

// Types of function : library function & user defined function

// #include<stdio.h>
// int sum(int a, int b);
// int main (){
//     int a, b;
//     printf("Enter the first number: ");
//     scanf("%d",&a);
//     printf("Enter the second number: ");
//     scanf("%d",&b);

//     int s= sum(a,b);
//     printf("The sum is %d \n",s);
//     return 0;
// }
// int sum (int a, int b){
//     return a + b;
// }

// argument vs parameter

// values that r passed in function call || values in the function declaration and definition
// used to send value || used to receive value
// actual parameter || formal parameter


#include <stdio.h>
void calculatePrice(float value);

int main(){
    float value;
    printf("Enter the price : ");
    scanf("%f",&value);
    calculatePrice(value);
    return 0;
}

void calculatePrice(float value){
    value=value+(0.18*value);
    printf("final price is : %f",value);
}