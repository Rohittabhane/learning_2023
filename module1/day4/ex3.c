#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTimePeriod(struct Time *time) {
    printf("Enter the hours: ");
    scanf("%d", &(time->hours));

    printf("Enter the minutes: ");
    scanf("%d", &(time->minutes));

    printf("Enter the seconds: ");
    scanf("%d", &(time->seconds));
}

void calculateTimeDifference(struct Time t1, struct Time t2, struct Time *diff) {
    int totalSeconds1, totalSeconds2, diffSeconds;

    totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    diffSeconds = totalSeconds2 - totalSeconds1;

    diff->hours = diffSeconds / 3600;
    diffSeconds %= 3600;

    diff->minutes = diffSeconds / 60;
    diffSeconds %= 60;

    diff->seconds = diffSeconds;
}

void displayTimePeriod(struct Time time) {
    printf("%02d:%02d:%02d\n", time.hours, time.minutes, time.seconds);
}

int main() {
    struct Time time1, time2, difference;

    printf("Enter the first time period:\n");
    getTimePeriod(&time1);

    printf("\nEnter the second time period:\n");
    getTimePeriod(&time2);

    printf("\nFirst Time Period: ");
    displayTimePeriod(time1);

    printf("Second Time Period: ");
    displayTimePeriod(time2);

    calculateTimeDifference(time1, time2, &difference);

    printf("\nDifference between the two time periods: ");
    displayTimePeriod(difference);

    return 0;
}
