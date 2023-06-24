#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box *box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box *box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box box;
    struct Box *boxPtr = &box;

    printf("Enter the length of the box: ");
    scanf("%lf", &(boxPtr->length));

    printf("Enter the width of the box: ");
    scanf("%lf", &(boxPtr->width));

    printf("Enter the height of the box: ");
    scanf("%lf", &(boxPtr->height));

    printf("\n");

    printf("Using (*) and (.) operators:\n");
    printf("Volume: %.2f\n", (*boxPtr).length * (*boxPtr).width * (*boxPtr).height);
    printf("Surface Area: %.2f\n", 2 * ((*boxPtr).length * (*boxPtr).width + (*boxPtr).length * (*boxPtr).height + (*boxPtr).width * (*boxPtr).height));

    printf("\n");

    printf("Using (->) operator (Pointer Representation):\n");
    printf("Volume: %.2f\n", boxPtr->length * boxPtr->width * boxPtr->height);
    printf("Surface Area: %.2f\n", 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height));

    printf("\n");

    printf("Using (->) operator (Dot Representation):\n");
    printf("Volume: %.2f\n", (*boxPtr).length * (*boxPtr).width * (*boxPtr).height);
    printf("Surface Area: %.2f\n", 2 * ((*boxPtr).length * (*boxPtr).width + (*boxPtr).length * (*boxPtr).height + (*boxPtr).width * (*boxPtr).height));

    return 0;
}
