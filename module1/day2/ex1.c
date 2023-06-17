#include <stdio.h>

void printExponent(double num) {
    unsigned long long *ptr = (unsigned long long *)&num; // Pointer to access the bits of the double variable
    unsigned long long exponentMask = 0x7FF0000000000000; // Mask to extract the exponent bits

    // Extract the exponent bits using bitwise AND operation
    unsigned long long exponentBits = (*ptr & exponentMask) >> 52;

    // Print the exponent in hexadecimal and binary format
    printf("Exponent in Hex: 0x%llX\n", exponentBits);
    
    printf("Exponent in Binary: ");
    for (int i = 11; i >= 0; i--) {
        unsigned long long bit = (exponentBits >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
