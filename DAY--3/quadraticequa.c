#include <stdio.h>
#include <math.h>

void findRoots(float a, float b, float c) {
    float determinant = b * b - 4 * a * c;

    if (determinant > 0) {
        float root1 = (-b + sqrt(determinant)) / (2 * a);
        float root2 = (-b - sqrt(determinant)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } else if (determinant == 0) {
        float root = -b / (2 * a);
        printf("Roots are real and equal: %.2f\n", root);
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-determinant) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    float a, b, c;
    printf("Enter coefficients a, b, and c for the quadratic equation ax^2 + bx + c = 0:\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Error: Not a quadratic equation (a cannot be zero).\n");
    } else {
        findRoots(a, b, c);
    }

    return 0;
}