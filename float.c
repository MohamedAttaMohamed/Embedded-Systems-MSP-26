#include <stdio.h>

int main() {
    float x;
    float y;
    
    x = 12.25;
    y = 10.12;
    printf("%.2f", x - (int)x);
    printf("\n%.2f", y - (int)y);

    return 0;
}