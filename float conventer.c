#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    printf("Division: %d\n", a / b);
    printf("Floating point result: %f\n",(float)a / b);

    return 0;
}