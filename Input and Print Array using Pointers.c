#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;
    
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (ptr + i)); 
    }

    printf("\nArray elements:\n[ ");
    for (int i = 0; i < 5; i++) {
        printf("%d", *(ptr + i)); 
        
        if (i < 4) printf(", ");
    }
    printf(" ]\n");

    return 0;
}