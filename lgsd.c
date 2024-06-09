#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the side of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<(b+c)||b<(a+c)||c<(a+b)){
        printf("It is a valid triangle");
    }
    return 0;
}