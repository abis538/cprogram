#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];
    
    // Hardcoded credentials
    char hardcodedUsername[] = "admin";
    char hardcodedPassword[] = "password123";
    
    printf("Login Simulation\n");
    printf("----------------\n");
    
    printf("Enter username: ");
    scanf("%19s", username);
    
    printf("Enter password: ");
    scanf("%19s", password);
    
    if (strcmp(username, hardcodedUsername) == 0 && strcmp(password, hardcodedPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }
    
    return 0;
}
