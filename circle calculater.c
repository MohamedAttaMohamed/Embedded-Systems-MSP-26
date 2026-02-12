#include <stdio.h>

int main() {
    float radius;
    float pi = 3.14;
    
    printf("Input the radius: ");
    scanf("%f", &radius);

    float perimeter = 2 * pi * radius;
    float area = pi * radius * radius;

    printf("Perimeter of the Circle = %.2f inches\n", perimeter);
    printf("Area of the Circle = %.2f square inches\n", area);
    
    return 0;
}