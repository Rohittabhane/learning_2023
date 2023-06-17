#include <stdio.h>

int findBiggestIfElse(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int findBiggestTernary(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int biggestIfElse = findBiggestIfElse(num1, num2);
    printf("Using if-else, the biggest number is: %d\n", biggestIfElse);

    int biggestTernary = findBiggestTernary(num1, num2);
    printf("Using the ternary operator, the biggest number is: %d\n", biggestTernary);

    return 0;
}
