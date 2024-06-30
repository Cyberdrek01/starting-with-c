// #include<stdio.h>

// int main(){
//     int n=0, lim, sum=0;
//     printf("Enter the limit: ");
//     scanf("%d",&lim);
//     while(n <= lim){
//         sum = sum + n;
//         n += 2;
//     }
//     printf("The sum of even numbers is: %d", sum);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i;
//     printf("Enter the number: ");
//     scanf("%d",&i);
//     switch(i){
//         case 1:
//         printf("Monday");
//         break;
//         case 2:
//         printf("Tuesday");
//         break;
//         default:
//         printf("Invalid");
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float a,b,c;
//     float area,s;
//     printf("Enter the length of the sides of the triangle: ");
//     scanf("%f %f %f",&a,&b,&c);
//     s = (a+b+c)/2;
//     area = sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("The area of the triangle is: %f", area);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n=1,count,lim;
//     float sum=0.0,fact;
//     printf("Enter the limit: ");
//     scanf("%d",&lim);
//     while(n<=lim){
//         fact = 1.0;
//         for (count=1;count<=n;count++)
//         {
//             fact=fact*count;

//         }
//         sum=sum+(n/fact);
//         n++;
        
//     }
//     printf("THe sum of th4e series :%f",sum);
//     return 0;
// }
#include<stdio.h>
int main(){
    int num=1,count,lim,x;
    float sum=0.0,f;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    while(num<=lim){
        for(count=0;count<=num-1;count++){
            f=pow(x,count);    
        }
        sum=sum+f;
        num++;
    }
    printf("the value: %d",sum);
    return 0;
}