#include<stdio.h>

int main(){
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z'){
        printf("character is uppercase");
    }else{
        printf("character is not uppercase");
    }
    return 0;
}