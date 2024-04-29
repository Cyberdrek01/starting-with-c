#include <stdio.h>

int main() {
    int Marks;

    printf("Enter the student's marks: ");
    
    if (Marks < 30) {
        printf("The student's grade is C.\n");
    } else if (Marks >= 30 && Marks < 70) {
        printf("The student's grade is B.\n");
    } else if (Marks >= 70 && Marks <= 90) {
        printf("The student's grade is A.\n");
    } else if (Marks >= 90 && Marks <= 100) {
        printf("The student's grade is A+.\n");
    } else {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
    }

    return 0;
}