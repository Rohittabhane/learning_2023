#include <stdio.h>

// Function to swap any type of data
void swapData(void *ptr1, void *ptr2, size_t size) {
    char *temp = (char *)malloc(size); // Temporary storage for swapping data

    // Copy data from ptr1 to temp
    memcpy(temp, ptr1, size);
    // Copy data from ptr2 to ptr1
    memcpy(ptr1, ptr2, size);
    // Copy data from temp to ptr2
    memcpy(ptr2, temp, size);

    free(temp); // Free the memory allocated for temp
}

int main() {
    int num1 = 10;
    int num2 = 20;
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap two integers
    swapData(&num1, &num2, sizeof(int));
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    float f1 = 3.14;
    float f2 = 2.71;
    printf("Before swapping: f1 = %.2f, f2 = %.2f\n", f1, f2);

    // Swap two floats
    swapData(&f1, &f2, sizeof(float));
    printf("After swapping: f1 = %.2f, f2 = %.2f\n", f1, f2);

    char c1 = 'A';
    char c2 = 'B';
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);

    // Swap two characters
    swapData(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
