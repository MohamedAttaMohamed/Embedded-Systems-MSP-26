#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        printf("Input the number: ");
        scanf("%d", &numbers[i]);
        
        // Check if number is odd
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }

    printf("Sum of all odd values: %d\n", sum);

    return 0;
}