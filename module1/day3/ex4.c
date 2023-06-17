#include <stdio.h>

int findLargestNumber(int num) {
    int maxNum = 0;

    for (int i = 0; i < 4; i++) {
        int temp = num / 10; // Remove the current digit
        int currentNum = temp * 1000 + num % 10; // Construct the modified number

        if (currentNum > maxNum) {
            maxNum = currentNum; // Update the maximum number if necessary
        }

        num = temp; // Update the number by removing the current digit
    }

    return maxNum;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);

    printf("Largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
