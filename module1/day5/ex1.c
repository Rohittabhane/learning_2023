#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseInputString(char *inputString, struct Student *students, int size) {
    char temp[20];

    for (int i = 0; i < size; i++) {
        sscanf(inputString, "%d %s %f", &(students[i].rollno), temp, &(students[i].marks));
        strcpy(students[i].name, temp);

        inputString = strchr(inputString, ' ') + 1; // Move to the next space-separated value
    }
}

int main() {
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Dynamically allocate memory for an array of structures
    struct Student *students = (struct Student *)malloc(size * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    getchar(); // Clear the newline character from the input buffer

    char inputString[100];
    printf("Enter the input string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the trailing newline character from the input string
    inputString[strcspn(inputString, "\n")] = '\0';

    parseInputString(inputString, students, size);

    // Display the initialized array of structures
    printf("\nArray of Structures:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    // Free dynamically allocated memory
    free(students);

    return 0;
}
