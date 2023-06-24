#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

void swapStudents(struct Student *s1, struct Student *s2) {
    struct Student temp;

    // Swap name
    strcpy(temp.name, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, temp.name);

    // Swap age
    temp.age = s1->age;
    s1->age = s2->age;
    s2->age = temp.age;

    // Swap marks
    temp.marks = s1->marks;
    s1->marks = s2->marks;
    s2->marks = temp.marks;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &(student1.age));
    printf("Marks: ");
    scanf("%f", &(student1.marks));

    printf("\nEnter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &(student2.age));
    printf("Marks: ");
    scanf("%f", &(student2.marks));

    printf("\nBefore swapping:\n");
    printf("Student 1:\nName: %s\nAge: %d\nMarks: %.2f\n", student1.name, student1.age, student1.marks);
    printf("Student 2:\nName: %s\nAge: %d\nMarks: %.2f\n", student2.name, student2.age, student2.marks);

    swapStudents(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\nName: %s\nAge: %d\nMarks: %.2f\n", student1.name, student1.age, student1.marks);
    printf("Student 2:\nName: %s\nAge: %d\nMarks: %.2f\n", student2.name, student2.age, student2.marks);

    return 0;
}
