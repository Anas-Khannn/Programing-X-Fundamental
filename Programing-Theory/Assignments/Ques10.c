#include <stdio.h>

int main() {
    int choice;
    
    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Option One\n");
        printf("2. Option Two\n");
        printf("3. Option Three\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("You selected Option One.\n");
        }
        else if (choice == 2) {
            printf("You selected Option Two.\n");
        }
        else if (choice == 3) {
            printf("You selected Option Three.\n");
        }
        else if (choice == 4) {
            printf("Goodbye!\n");
            break;  
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
    }
    
    return 0;
}