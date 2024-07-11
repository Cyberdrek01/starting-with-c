#include <stdio.h>

int main() {
    int num, digit, sum, temp;
    int counter = 1;

    // Print Armstrong numbers between 1 and 500
    while (counter <= 500) {
        sum = 0;
        temp = counter;

        // Calculate the sum of the cubes of the digits
        while (temp != 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        // Check if the sum of cubes of the digits is equal to the number
        if (sum == counter) {
            printf("%d\n", counter);
        }

        counter++;
    }

    return 0;
}
