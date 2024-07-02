#include<stdio.h>
int main(){
    int c=3;
    switch (c)
    {
    case '3':
    printf("You never win the silver prize\n");
    break;
    case 3:
    printf("You lose the golden prize");
    break;    
    default:
    printf("Ofcourse provided you win a prize");
        break;
    }
    return 0;
}