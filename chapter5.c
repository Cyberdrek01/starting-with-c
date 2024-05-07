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

#include<stdio.h>
int sum(int a, int b);
int main (){
    int a, b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    int s= sum(a,b);
    printf("The sum is %d \n",s);
    return 0;
}
int sum (int a, int b){
    return a+ b;
}