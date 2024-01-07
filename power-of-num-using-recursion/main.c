#include <stdio.h>
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }
    else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    double base;
    int exponent;

    // Input the base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate and display the result
    double result = power(base, exponent);
    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);

    return 0;
}
