// #include<stdio.h>
// int main(){
//     int num,a,b,c,d,e;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     e=num%10;
//     d=(num/10)%10;
//     c=(num/100)%10;
//     b=(num/1000)%10;
//     a=(num/10000);
//     printf("%d is the sum of digit of nummber %d",a+b+c+d+e, num);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num,a,b,c,d,e;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     e=num%10;
//     d=(num/10)%10;
//     c=(num/100)%10;
//     b=(num/1000)%10;
//     a=(num/10000);
//     num=(e*10000)+(d*1000)+(c*100)+(b*10)+(a);
//     printf("%d",num);
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float s,area;
    printf("Enter the lenth of AB,BC,CA: ");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle is : %f",area);
    return 0;
}