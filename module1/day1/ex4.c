#include <stdio.h>

int main() {
    float operand1, operand2;
    char operator;
    float result;

    // Read Operand 1
    printf("Enter Number 1: ");
    scanf("%f", &operand1);

    // Read Operator
    printf("Enter the Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Read Operand 2
    printf("Enter Number 2: ");
    scanf("%f", &operand2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            // Check for division by zero
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 0;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 0;
    }

    // Print the result
    printf("Result: %.2f\n", result);

    return 0;
}
