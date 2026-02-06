#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 != num2) {
        printf("Two Numbers not Equal\n");
        
        if (num1 > num2) {
            printf("The First Number Greater than Second Number\n");
        } // Added this missing brace to close the "if (num1 > num2)"
        else {
            printf("The Second Number Greater than First Number\n");
        }
    }
    else {
        printf("Two Numbers are Equal\n");
    }

    return 0;
}