#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    while(1){
        printf("\nEnter f for factorial, p for prime number, o for odd/even \n To exit press x: ");
        scanf("%c",&ch);
        if(ch=='x'){
            exit(0);
        }
        int i,n,fact=1,prime=0;
        printf("Enter your number: ");
        scanf("%d",&n);
        switch (ch)
        {
        case 'f':
            for(i=1;i<=n;i++){
                fact=fact*i;
            }
            printf("Factorial of %d is: %d",n,fact);
            break;
        case 'p':
            for(i=2;i<=n/2;i++){
                if(n%i==0){
                    prime++;
                    break;
                }
            }
            if(prime==0&&n!=1){
                printf("%d is a prime number",n);
            }
            else{
                printf("%d is not a prime number",n);
            }
            break;
        case 'o':
            if(n%2==0){
                printf("It is a even number");
            }
            else{
                printf("It is odd number");
            }
            break;
        default:
            printf("ERROR! please enter a valid input.");
            break;
        }
        printf("\n");
    }
}