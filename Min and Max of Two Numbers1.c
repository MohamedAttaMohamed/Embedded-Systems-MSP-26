#include <stdio.h>

int findMin(int a, int b) {
    return (a < b) ? a : b;
}

int findMax(int a, int b) {
    return (a > b) ? a : b;
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