#include<stdio.h>
#include<math.h>
int main () {
    int y;
    printf("enter a year =" );
    scanf("%d",&y);
    if( y%400==0 || y%100!=0 && y%4==0){
        printf("possible");
    }
    else {
    printf("not possible");
    }
}