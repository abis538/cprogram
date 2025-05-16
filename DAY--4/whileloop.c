#include <stdio.h>

int main() {
    int i = 1;
    
    printf("Even numbers between 1 to 50: ");
    
    while (i <= 50) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    
    printf("\n");
    
    return 0;
}


