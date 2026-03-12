#include <stdio.h>

int main() {
    char password = 'A'; 
    char input;
    char username[] = "Mohamed"; 
    do {
        printf("Enter your password: ");
        scanf(" %c", &input);
        
    } while (input != password);

    printf("\nHello, %s\n", username);

    return 0;
}
