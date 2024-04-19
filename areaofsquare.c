// #include<stdio.h>
// #include<math.h>

// int main(){
//     int side;
//     printf("Enter side:");
//     scanf("%d", side);
//     int power = pow(side,2);
//     printf("area of square is: %d", power);
//     return 0;
// }
#include <stdio.h>
#include <math.h>

// Function to calculate the area of a square
int calculateSquareArea(int side) {
    int area = pow(side, 2);
    return area;
}

int main() {
    int side;

    // Prompt user to enter the side length of the square
    printf("Enter the side length of the square: ");

    // Read the side length from user input
    scanf("%d", &side);

    // Calculate the area of the square
    int area = calculateSquareArea(side);

    // Print the area of the square
    printf("The area of the square is: %d\n", area);

    return 0;
}