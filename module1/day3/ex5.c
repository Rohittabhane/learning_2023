#include <stdio.h>

void findSmallestAndLargestDigits(int n, ...) {
    int num, digit;
    int smallestDigit = 9;
    int largestDigit = 0;

    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; i++) {
        num = va_arg(args, int);

        while (num > 0) {
            digit = num % 10; // Extract the last digit

            if (digit < smallestDigit) {
                smallestDigit = digit; // Update smallest digit if necessary
            }

            if (digit > largestDigit) {
                largestDigit = digit; // Update largest digit if necessary
            }

            num /= 10; // Remove the last digit
        }
    }

    va_end(args);

    printf("Smallest Digit: %d\n", smallestDigit);
    printf("Largest Digit: %d\n", largestDigit);
}

int main() {
    findSmallestAndLargestDigits(3, 8, 156, 123450);

    return 0;
}
