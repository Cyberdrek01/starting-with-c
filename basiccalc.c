#include<stdio.h>
#include<stdlib.h>
int main(){
    char i;
    int a,b;
    while(1){
        printf("Enter an operator(+,-,*,/),\n if want to exit press x: ");
        scanf("%c",&i);
        if(i=='x'){
          exit(0);
        }
        printf("Enter the two operands: ");
        scanf("%d %d",&a,&b);
        switch (i)
        {
        case '+':
            printf("%d + %d= %d",a,b,a+b);
            break;
        case '-':
            printf("%d - %d= %d",a,b,a-b);
            break;
        case '*':
            printf("%d * %d= %d",a,b,a*b);
            break;
        case '/':
            printf("%d / %d= %d",a,b,a/b);
            break;
    
        default:
            printf("ERROR!, Please write a valid operator\n");
            break;
        }
        printf("\n");
    }
}