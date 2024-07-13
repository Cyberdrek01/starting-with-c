#include <stdio.h>

int main() {
    int i, j;
    float sum = 0.0, factorial, term;

    // Iterate through the first seven terms
    for (i = 1; i <= 7; i++) {
        factorial = 1.0;

        // Calculate factorial of i
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }

        // Calculate the term i / i!
        term = i / factorial;

        // Add the term to the sum
        sum += term;
    }

    // Print the sum of the series
    printf("The sum of the first seven terms of the series is: %.5lf\n", sum);

    return 0;
}