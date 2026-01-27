#include<stdio.h>
#include<math.h>
int main(){
int x, y, z;
printf("the value of x,y,z: ");
scanf("%d %d %d", &x,&y,&z);
int A = pow(x,3);
int B = pow(y,3);
int C = pow(z,3);
printf("the sum is = %d", A + B + C);
return 0;
}