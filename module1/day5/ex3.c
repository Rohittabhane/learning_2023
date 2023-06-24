#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayArray(struct Student *students, int size) {
    printf("\nArray of Structures:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student students[size];

    // Code to initialize the array of structures

    displayArray(students, size);

    return 0;
}
