#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main() {
    float r;
    float pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("diameter = %.3f\n", 2*r);
    printf("circumference = %.3f\n", 2*pi*r);
    printf("area = %.3f\n", pi*r*r);
    return 0;
}