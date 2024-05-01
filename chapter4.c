// loop control instruction
// for while do while

// #include <stdio.h>

// int main() {
//     // for(int i=1; i<=5; i=i+1){
//     //     printf("hello world \n");
//     // }


//     // int i=1;
//     // while(i<=5){
//     //     printf("%d \n",i);
//     //     i++;
//     // }

//     int i=1;
//     do{
//         printf("%d \n" ,i);
//         i++;
//     }while(i<=5);
//     return 0;
// }

// break statement
#include <stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        if(i==3){
            break;
        }
        printf("%d \n", i);
    }
    printf("end");
    return 0;
}
