#include <stdio.h>

int main() {
    char password;
    char correct_pass = 'M';
    
    while (1) {
        printf("Enter your password: ");
        scanf(" %c", &password);

        if (password == correct_pass) {
            printf("\nHello, Mohamed Atta \n");
            break;
        }
    }

    return 0;
}