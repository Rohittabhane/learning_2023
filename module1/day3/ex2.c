#include <stdio.h>

void printBits(int num) {
    int size = sizeof(num) * 8; // Total number of bits in the integer

    for (int i = size - 1; i >= 0; i--) {
        int bit = (num >> i) & 1; // Extract the i-th bit

        printf("%d", bit);

        if (i % 8 == 0) {
            printf(" "); // Add a space after every 8 bits
        }
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Bits representation: ");
    printBits(num);

    return 0;
}
