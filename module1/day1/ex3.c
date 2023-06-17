#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    int physics, math, chemistry;
    int total;
    float percentage;

    // Read roll number
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    // Read name
    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    // Read marks of Physics, Math, and Chemistry
    printf("Enter Marks of Physics: ");
    scanf("%d", &physics);

    printf("Enter Marks of Math: ");
    scanf("%d", &math);

    printf("Enter Marks of Chemistry: ");
    scanf("%d", &chemistry);

    // Calculate total and percentage
    total = physics + math + chemistry;
    percentage = (float)total / 3;

    // Print summary
    printf("\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics: %d\n", physics);
    printf("Math: %d\n", math);
    printf("Chemistry: %d\n", chemistry);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
