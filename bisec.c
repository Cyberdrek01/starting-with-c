#include <stdio.h>
#include <math.h>

// Define the function for which we are finding the root
double f(double x) {
    // Example function: f(x) = x^3 - x - 2
    return x*x*x - x - 2;
}

int main() {
    double a, b, c, fa, fb, fc, e;
    int i = 0;
    printf("Enter the initial interval [a, b]: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter the desired accuracy: ");
    scanf("%lf", &e);
    
    // Check if the function has opposite signs at the endpoints
    fa = f(a);
    fb = f(b);
    if (fa * fb > 0) {
        printf("The function does not have opposite signs at the endpoints.\n");
        return 1;
    }
    
    do {
        c = (a + b) / 2;
        fc = f(c);
        if (fa * fc < 0)
            b = c;
        else
            a = c;
        i++;
    } while (fabs(b - a) > e);
    
    printf("Root is: %lf\n", (a + b) / 2);
    printf("Number of iterations: %d\n", i);
    return 0;
}