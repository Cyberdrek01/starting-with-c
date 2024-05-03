#include <stdio.h>

void namaste();
void bonjour();

int main(){
    printf("Enter i for indian and f for french: ");
    char ch;
    scanf("%c", &ch);
    if( ch == 'i'){
        namaste();
    }else bonjour();
    return 0;
}
void namaste(){
    printf("Namaste");
}
void bonjour(){
    printf("Bonjour");
}