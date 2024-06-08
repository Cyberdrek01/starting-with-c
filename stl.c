#include<stdio.h>
int main(){
    int h=50,c=0.7,ts=5600;
    float hs,cc,tens;
    printf("Enter the hardness,carbon content and tensile strength of steel: ");
    scanf("%f %f %f ",&hs,&cc,&tens);
    if(h==hs && c==cc && ts==tens){
        printf("Grade 10");
    }
    else if(h<hs&&c>cc && ts>tens){
        printf("Grade 8");
    }
    else if(h<hs&&c<cc && ts<tens){
        printf("Grade 7");
    }
    else if(h<hs||c>cc || ts<tens){
        printf("Grade 6");
    }
    else if(h>hs&&c<cc && ts>tens){
        printf("Grade 5");
    }
    return 0;
}