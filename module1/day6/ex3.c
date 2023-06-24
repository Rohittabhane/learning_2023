#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

// Structure to store log entry
typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;

// Function to extract log entries from the CSV file
int extractLogEntries(LogEntry entries[]) {
    FILE *file;
    char line[100];
    int entryCount = 0;

    // Open the CSV file
    file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 0;
    }

    // Read each line from the CSV file and parse the log entry
    while (fgets(line, sizeof(line), file)) {
        // Ignore the header line
        if (strncmp(line, "EntryNo", 7) == 0)
            continue;

        // Parse the line and store the log entry in the array of structures
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,]",
               &entries[entryCount].entryNo,
               entries[entryCount].sensorNo,
               &entries[entryCount].temperature,
               &entries[entryCount].humidity,
               &entries[entryCount].light,
               entries[entryCount].timestamp);

        entryCount++;

        // Break if the maximum number of entries has been reached
        if (entryCount >= MAX_ENTRIES)
            break;
    }

    // Close the file
    fclose(file);

    return entryCount;
}

// Function to display the log entries
void displayLogEntries(LogEntry entries[], int entryCount) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    for (int i = 0; i < entryCount; i++) {
        printf("%d\t%s\t%.1f\t\t%d\t\t%d\t%s\n",
               entries[i].entryNo,
               entries[i].sensorNo,
               entries[i].temperature,
               entries[i].humidity,
               entries[i].light,
               entries[i].timestamp);
    }
}

int main() {
    LogEntry entries[MAX_ENTRIES];
    int entryCount;

    // Extract log entries from the CSV file
    entryCount = extractLogEntries(entries);
    if (entryCount == 0) {
        printf("No log entries found.\n");
        return 1;
    }

    // Display the log entries
    displayLogEntries(entries, entryCount);

    return 0;
}
