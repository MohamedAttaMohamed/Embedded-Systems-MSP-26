#include <stdio.h>

int main() {
    int n1, n2, n3, smallest;
    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

if (n1 >= n2 && n1 >= n3) {
    printf("Largest: %d", n1);
} else if (n2 >= n1 && n2 >= n3) {
    printf("Largest: %d", n2);
} else {
    printf("Largest: %d", n3);
}

    return 0;
}