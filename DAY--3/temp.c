#include <stdio.h>

void suggestOutfit(float temperature) {
    if (temperature < 10) {
        printf("Wear a jacket to stay warm.\n");
    } else if (temperature >= 10 && temperature < 20) {
        printf("Wear a sweater for a cozy fit.\n");
    } else if (temperature >= 20) {
        printf("Wear a T-shirt for a light and breezy feel.\n");
    }
}

int main() {
    float temperature;
    printf("Enter the temperature: ");
    scanf("%f", &temperature);
    suggestOutfit(temperature);
    return 0;
}