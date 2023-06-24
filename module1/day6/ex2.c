#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to copy file content and handle text case
void copyFile(const char *sourceFile, const char *destinationFile, char option) {
    FILE *source, *destination;
    char ch;

    // Open source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Failed to open the source file.\n");
        return;
    }

    // Open destination file in write mode
    destination = fopen(destinationFile, "w");
    if (destination == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(source);
        return;
    }

    // Copy file content character by character and apply text case based on the option
    while ((ch = fgetc(source)) != EOF) {
        switch (option) {
            case 'u':
                fputc(toupper(ch), destination);
                break;
            case 'l':
                fputc(tolower(ch), destination);
                break;
            case 's':
                fputc(toupper(ch), destination);
                break;
            default:
                fputc(ch, destination);
                break;
        }
    }

    printf("File copied successfully.\n");

    // Close files
    fclose(source);
    fclose(destination);
}

int main(int argc, char *argv[]) {
    char option;
    const char *sourceFile;
    const char *destinationFile;

    if (argc < 3) {
        printf("Insufficient arguments.\n");
        return 1;
    }

    option = argv[1][1];
    sourceFile = argv[2];
    destinationFile = argv[3];

    copyFile(sourceFile, destinationFile, option);

    return 0;
}
