#include <stdio.h>

int main() {
    int num, sum = 0;

    while (1) {
        printf("Enter a positive number: ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }
        sum += num;
    }

    printf("Sum = %d\n", sum);
    return 0;
}