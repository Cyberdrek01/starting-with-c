#include<stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("Enter the age of Ram: ");
    scanf("%d",&ram);
    printf("Enter the age of shyam:");
    scanf("%d",&shyam);
    printf("Enter the age of Ajay: ");
    scanf("%d",&ajay);
    if(ram>=shyam && ram>ajay){
        printf("Ram is the oldest person");
    }
    else if(shyam>ram  && shyam>ajay){
        printf("Shyam is oldest");
    }
    else{
        printf("Ajay is oldest");
    }
    return 0;
}