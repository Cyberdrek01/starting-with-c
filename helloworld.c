#include<stdio.h>

int main(){
    printf("Hello World\n");
    // \n next line 
    // variables
    // int age = 20;
    float pi = 3.14;
    char hashtag = '#'; 
    // output for variables
    // printf("age is %d \n",age );
    printf("value of pi is %f \n",pi );
    printf("hashtags looks like this %c \n",hashtag );
    //input
    int age;
    printf("enter the age: ");
    scanf("%d", &age);
    printf("age is %d \n", age);
    return 0;
}