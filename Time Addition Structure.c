#include <stdio.h>
#include <stdlib.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTime(struct Time *t, const char *label) {
    char buffer[50];
    printf("Enter %s (hh:mm:ss): ", label);
    if (fgets(buffer, sizeof(buffer), stdin)) {
        // Parse the string into the structure members
        sscanf(buffer, "%d:%d:%d", &t->hours, &t->minutes, &t->seconds);
    }
}

int main() {
    struct Time t1, t2, sum;

    getTime(&t1, "first time");
    getTime(&t2, "second time");

    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + (sum.seconds / 60);
    sum.hours = t1.hours + t2.hours + (sum.minutes / 60);

    sum.seconds %= 60;
    sum.minutes %= 60;

    printf("sum = %02d:%02d:%02d\n", sum.hours, sum.minutes, sum.seconds);

    return 0;
}
