#include <stdio.h>

int main() {
    int guess;
    int answer = 3;

    while (1) {
        printf("Enter a number (0:10): ");
        scanf("%d", &guess);

        if (guess > answer) {
            printf("Too High\n");
        } else if (guess < answer) {
            printf("Too Low\n");
        } else {
            printf("Correct answer!\n");
            break;
        }
    }

    return 0;
}