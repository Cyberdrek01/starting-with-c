#include<stdio.h>
int main(){
    float h,c,ts;
    printf("Enter the hardness , carbon content and tensile strength of the steel: ");
    scanf("%f %f %f",&h,&c,&ts);
    if(h>50 && c<0.7 && ts>5600){
        printf("Grade 10 ");
    }
    else if(h>50 && c<0.7 && ts<5600){
        printf("grade 9");
    }
    else if(h>50 && c>0.7 && ts>5600){
        printf("grade 8");
    }
    else if(h<50 && c<0.7 && ts>5600){
        printf("grade 7");
    }
    else if(h>50 || c<0.7 || ts>5600){
        printf("grade 6");
    }
    else if(h<50 && c>0.7 && ts<5600){
        printf("grade 6");
    }
    return 0;
}