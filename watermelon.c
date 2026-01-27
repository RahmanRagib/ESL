#include<stdio.h>
int main() {
    int w;
    printf("Enter weight of watermelon: ");
    scanf("%d", &w);
        if(w>=1 && w<=100 && w%2==0){
        printf("possible.");
        }
    else{
        printf("impossible.");
        }
        
    return 0;
    }