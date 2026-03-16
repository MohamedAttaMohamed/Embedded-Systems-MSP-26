#include <stdio.h>

void check_Even_OR_Odd(int n) {
    if (n % 2 == 0)
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    check_Even_OR_Odd(num);
    
    return 0;
}