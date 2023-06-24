#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

// Comparison function for qsort
int compare(const void *a, const void *b) {
    const struct Student *studentA = (const struct Student *)a;
    const struct Student *studentB = (const struct Student *)b;

    // Sort in descending order based on marks
    if (studentA->marks > studentB->marks) {
        return -1;
    } else if (studentA->marks < studentB->marks) {
        return 1;
    } else {
        return 0;
    }
}

void sortArray(struct Student *students, int size) {
    qsort(students, size, sizeof(struct Student), compare);
}

int main() {
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student students[size];

    for (int i = 0; i < size; i++) {
        printf("Enter Roll No for Student %d: ", i + 1);
        scanf("%d", &(students[i].rollno));
        printf("Enter Name for Student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter Marks for Student %d: ", i + 1);
        scanf("%f", &(students[i].marks));
    }

    sortArray(students, size);

    printf("\nSorted Array of Structures (Descending Order):\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
