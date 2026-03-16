#include <stdio.h>

int findMin(int a, int b) {
    int min;
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    return min;
}

int findMax(int a, int b) {
    int max;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    return max;
}

int main() {
    int num1, num2;
    
    printf("Enter number 1: ");
    scanf("%d", &num1);
    
    printf("Enter number 2: ");
    scanf("%d", &num2);
    
    printf("\nmin = %d", findMin(num1, num2));
    printf("\nmax = %d\n", findMax(num1, num2));
    
    return 0;
}