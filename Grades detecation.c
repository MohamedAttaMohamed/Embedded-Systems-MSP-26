#include <stdio.h>

int main() {
    float grade;
    printf("Enter your grade percentage: ");
    scanf("%f", &grade);
    
    if(grade >=85){
        printf("Excellent\n");
    } else if (grade >= 75) {
        printf("Very Good\n");
    } else if (grade >= 65) {
        printf("Good\n");
    } else if (grade >= 50) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
    return 0;
}