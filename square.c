#include<stdio.h>
#include<math.h>
int main() {
    float radius;
    printf("enter the radius of the circle: ");
    scanf(" %f" ,&radius);
    printf("area =%.5f\n" , 3.14*radius*radius);
    return 0;
}