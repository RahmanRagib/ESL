#include<stdio.h>
#include<math.h>
int main()
{   float x,y;
    printf("enter the value of x y = ");
    scanf("%f%f",&x,&y);
    if (x==0 && y==00){
        printf("origin");
    }
    else if (x>0 && y>0){
        printf("1st quadrant");
    }
     else if (x>0 && y<0){
        printf("4th quadrant");
    }
     else if (x<0 && y>0){
        printf("2nd quadrant");
    }
     else if (x<0 && y<0){
        printf("3rd quadrant");
    }
     else if (x==0 && y>0){
        printf("positive Y axis ");
    }
    else if (y==0 && x>0){
        printf("positive X axis ");
    }
    else if (x==0 && y<0){
        printf("negative Y axis ");
    }
    else if (y==0 && x<0){
        printf("negative X axis ");
    }
    return 0;
}