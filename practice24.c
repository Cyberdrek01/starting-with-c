#include <stdio.h>
int main(){
    float m1,m2,m3,m4,m5;
    float agg;
    float pct;
    printf("Enter the marks in five subject:");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    printf("marks obtain in first subject %f \nmarks obtain in second subject %f \nmarks obtain in third subject %f \nmarks obtain in fourth subject %f \nmark obtain in fifth subject%f \n",m1,m2,m3,m4,m5);
    agg=m1+m2+m3+m4+m5;
    printf("The total marks obtained: %f\n",agg);
    pct=(agg/5);
    printf("Total percentage: %f\n",pct);
    return 0;
}