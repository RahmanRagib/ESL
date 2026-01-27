#include <stdio.h>

float divide(float a, float b) {
    return a / b;
}

int main(void) {
    float n1, n2;
    printf("Enter two numbers: ");
    if (scanf("%f %f", &n1, &n2) != 2) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    if (n2 == 0.0f) {
        fprintf(stderr, "Division by zero\n");
        return 1;
    }
    printf("entered: %f %f\n", n1, n2);
    float result = divide(n1, n2);
    printf("the division is %f\n", result);
    return 0;
}
  