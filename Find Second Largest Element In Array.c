#include <stdio.h>
#include <limits.h>

int main() {
    int n, arr[100], max, secondMax;
    printf("Enter size: ");
    scanf("%d", &n);

    max = secondMax = INT_MIN;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if(arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }
    printf("Second Largest: %d", secondMax);
    return 0;
}