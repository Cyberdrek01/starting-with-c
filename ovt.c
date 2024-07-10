// #include<stdio.h>
// int main(){
//     int ot,hrs,r,i=1;
//     float otp;
//     while(i<=10){
//         printf("\nEnter the working hours of the employee: ");
//         scanf("%d",&hrs);
//         if(hrs>=40){
//             ot=hrs-40;
//             otp=ot*12;
//             printf("\nThe Employee %d has got a bonus of: %f\n",i,otp);
//         }
//         else{
//             printf("\nNo Bonus for employee no %d",i);
//         }
//         i++;
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int hoursWorked, overtimeHours;
    float overtimePay;
    int employeeCount = 0;

    while (employeeCount < 10) {
        // Prompt the user to input hours worked for the current employee
        printf("Enter the number of hours worked by employee %d: ", employeeCount + 1);
        scanf("%d", &hoursWorked);

        // Calculate overtime hours and overtime pay
        if (hoursWorked > 40) {
            overtimeHours = hoursWorked - 40;
            overtimePay = overtimeHours * 12.00;
        } else {
            overtimePay = 0.0;
        }

        // Display the overtime pay for the current employee
        printf("Overtime pay for employee %d is: Rs. %.2f\n", employeeCount + 1, overtimePay);

        // Increment the employee counter
        employeeCount++;
    }

    return 0;
}
