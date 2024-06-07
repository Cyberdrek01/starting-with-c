#include<stdio.h>
int main(){
    char chr;
    printf("Enter the character: ");
    scanf("%c",&chr);
    if(chr>=65 && chr<=90){
        printf("%c is a capital letter",chr);
    }
    else if(chr>=97 && chr<=122){
        printf("%c is a small letter",chr);
    }
    else if(chr>=48 && chr<=57){
        printf("%c is a digit",chr);
    }
    else if((chr>=0 && chr<=47)|| (chr>=58 && chr<=64) || (chr>=91 && chr<=96) || (chr>=123 && chr<=127)){
        printf("%c is a special symbol",chr);
    }
    return 0;
}