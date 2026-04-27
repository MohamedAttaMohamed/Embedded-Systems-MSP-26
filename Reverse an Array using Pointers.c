#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;

    // Input elements
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    int *left = arr;          
    int *right = arr + 4;     
    int temp;

    while (left < right) {

        temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

    printf("\nReversed Array elements:\n[ ");
    for (int i = 0; i < 5; i++) {
        printf("%d", *(ptr + i));
        if (i < 4) printf(", ");
    }
    printf(" ]\n");

    return 0;
}