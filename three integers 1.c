#include <stdio.h>

int main() {
    int n1, n2, n3, smallest;
    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    smallest = n1;
    if (n2 < smallest) {
        smallest = n2;
    }
    if (n3 < smallest) {
        smallest = n3;
    }

    printf("The smallest number is: %d\n", smallest);
    return 0;
}