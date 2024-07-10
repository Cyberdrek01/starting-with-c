#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Prompt the user to input values for the three sides
    printf("Enter the first side of the triangle: ");
    scanf("%f", &side1);
    
    printf("Enter the second side of the triangle: ");
    scanf("%f", &side2);
    
    printf("Enter the third side of the triangle: ");
    scanf("%f", &side3);

    // Check if the triangle is equilateral
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is equilateral.\n");
    } 
    // Check if the triangle is isosceles
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is isosceles.\n");
    } 
    // Check if the triangle is right-angled
    else if ((side1*side1 + side2*side2 == side3*side3) || 
             (side1*side1 + side3*side3 == side2*side2) || 
             (side2*side2 + side3*side3 == side1*side1)) {
        printf("The triangle is right-angled.\n");
    } 
    // If none of the above, the triangle is scalene
    else {
        printf("The triangle is scalene.\n");
    }

    return 0;
}
