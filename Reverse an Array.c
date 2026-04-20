#include <stdio.h>

int main() {
    int n, arr[100], temp;
    printf("Enter size: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}