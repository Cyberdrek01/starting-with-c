#include <stdio.h>

int main() {
    float side1, side2, side3, largest, sumOfOthers;

    // Prompt the user to input values for the three sides
    printf("Enter the first side of the triangle: ");
    scanf("%f", &side1);
    
    printf("Enter the second side of the triangle: ");
    scanf("%f", &side2);
    
    printf("Enter the third side of the triangle: ");
    scanf("%f", &side3);

    // Identify the largest side
    if (side1 > side2 && side1 > side3) {
        largest = side1;
        sumOfOthers = side2 + side3;
    } else if (side2 > side1 && side2 > side3) {
        largest = side2;
        sumOfOthers = side1 + side3;
    } else {
        largest = side3;
        sumOfOthers = side1 + side2;
    }

    // Check if the sum of the other two sides is greater than the largest side
    if (sumOfOthers > largest) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
