#include<stdio.h>
int main(){
    char s=3;
    switch (s)
    {
    case 1:
    printf("Diamond\n");
    case 2:
    printf("Spade\n");
    default:
    printf("Heart\n");
    }
    printf("I thought one wears a suite\n");
    return 0;
}