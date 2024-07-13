#include <stdio.h>

int main() {
    int rows = 4;
    int currentNum = 1;
    int space, num;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf("   ");
        }

        // Print numbers
        for (num = 1; num <= i; num++) {
            printf("%d", currentNum);
            currentNum++;
            // Print space between numbers
            if (num < i) {
                printf("     ");
            }
        }
        printf("\n");
    }

    return 0;
}