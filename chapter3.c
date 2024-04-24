// //conditional statement
// #include <stdio.h>

// int main(){
//     int age;
//     printf("enter age: ");
//     scanf("%d",&age);
    
//     age>=18 ? printf("adult\n") : printf("not Adult\n");
//     return 0;
// }
// ternary
// Condition?doSomething if True: doSomething if False;

// switch
// switch(number){
//     case C1://*code*/
//         break;
//     case C2:/*code*/
//         break;
//     default://*default action*
// }

#include<stdio.h>

int main(){
    int day;
    printf("enter day(1-7):");
    scanf("%d",&day);
    switch(day){
        case 1:printf("Monday\n");
            break;
        case 2:printf("Tuesday\n");
            break;
        case 3:printf("Wednesday\n");
            break;
        case 4:printf("Thursday\n");
            break;
        case 5:printf("Friday\n");
            break;
        case 6:printf("Saturday\n");
            break;
        case 7:printf("Sunday\n");
            break;
        default: printf("not a valid day!\n");
    }
    return 0;
}