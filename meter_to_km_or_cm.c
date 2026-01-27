#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    float d;
    printf("enter the distance in meters: %.5f\n", d);
    scanf("%f", &d);
    printf("the distance in cm is %.5f\n", d*100);
    printf("the distance in km is %.5f\n", d/1000);
    return 0;
    }