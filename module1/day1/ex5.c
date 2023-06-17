#include <stdio.h>

// Function to perform bit operations
int bit_operations(int num, int oper_type) {
    int result = num; // Initialize result with the given number

    switch (oper_type) {
        case 1:
            result |= 1; // Set 1st bit
            break;
        case 2:
            result &= ~(1 << 31); // Clear 31st bit
            break;
        case 3:
            result ^= (1 << 15); // Toggle 16th bit
            break;
        default:
            printf("Error: Invalid operation type.\n");
            return num; // Return the original number if operation type is invalid
    }

    return result;
}

int main() {
    int num, oper_type;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    int result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
