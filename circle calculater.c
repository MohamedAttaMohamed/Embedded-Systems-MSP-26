#include <stdio.h>
#include <string.h>

struct Circle {
    float radius;
    float diameter;
    float perimeter;
    float area;
};

int main() {
    struct Circle c;
    char buffer[20];
    const float PI = 3.14159;

    printf("Enter circle radius: ");
    if (fgets(buffer, sizeof(buffer), stdin)) {
        sscanf(buffer, "%f", &c.radius);
    }

    c.diameter = 2 * c.radius;
    c.perimeter = 2 * PI * c.radius;
    c.area = PI * c.radius * c.radius;

    printf("perimeter = %.2f\n", c.perimeter);
    printf("area = %.2f\n", c.area);

    return 0;
}
