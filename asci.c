#include <stdio.h>

int main() {
    int asciiValue = 0;

    // Print all ASCII values and their equivalent characters
    while (asciiValue <= 255) {
        printf("ASCII value %d: %c\n", asciiValue, asciiValue);
        asciiValue++;
    }

    return 0;
}
