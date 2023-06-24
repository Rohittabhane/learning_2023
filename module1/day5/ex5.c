#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchByName(struct Student *students, int size, const char *name) {
    int found = 0;

    printf("\nSearch Results:\n");

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student %d:\n", i + 1);
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
        }
    }

    if (!found) {
        printf("No student found with the name: %s\n", name);
    }
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

    char searchName[20];
    printf("\nEnter the name to search: ");
    scanf("%s", searchName);

    searchByName(students, size, searchName);

    return 0;
}
