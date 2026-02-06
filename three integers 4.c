#include <stdio.h>

int main() {
    int n1, n2, n3, smallest;
    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

int max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
printf("Largest: %d", max);

    return 0;
}