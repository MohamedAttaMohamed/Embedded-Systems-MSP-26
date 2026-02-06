#include <stdio.h>
#include <math.h>

int main() {
    int num, root;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Please enter a positive number.\n");
    } else {
        root = sqrt(num);
        
        if (root * root == num) {
            printf("%d is a Perfect Square.\n", num);
        } else {
            printf("%d is not a Perfect Square.\n", num);
        }
    }

    return 0;
}