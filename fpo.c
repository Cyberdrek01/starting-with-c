#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    int a,b;
    while(1){
        printf("Enter f for factorial, p for prime number, o for odd/even \n to exit press x: ");
        scanf("%c",&ch);
        if(ch=='x'){
            exit(0);
        }
        int i=1,n,fact=1,prime=0;
        printf("Enter your number: ");
        scanf("%d",&n);
        switch (ch)
        {
        case 'f':
            fact=n;
            while(n!=0){
                i=i*n;
                n=n-1;
            }            
            printf("Factorial of %d= %d",fact,n);
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
                printf("it is a even number");
            }
            else("It is odd number");
            break;
        default:
            printf("ERROR! please enter a valid input.");
            break;
        }
        printf("\n");
    }
}