#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Is a > b?  Result: %d\n", a > b);
    printf("Is a < b?  Result: %d\n", a < b);
    printf("Is a == b? Result: %d\n", a == b);
    printf("Is a != b? Result: %d\n", a != b);

    return 0;
}