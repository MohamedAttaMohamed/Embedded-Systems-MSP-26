#include <stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main() {
    int num1, num2;
    
    printf("Enter number 1: ");
    if (scanf("%d", &num1) != 1) return 1;
    
    printf("Enter number 2: ");
    if (scanf("%d", &num2) != 1) return 1;
    
    
    printf("\nmin = %d", MIN(num1, num2));
    printf("\nmax = %d\n", MAX(num1, num2));
    
    return 0;
}