#include<stdio.h>
int main(){
    int n,r,temp;
    printf("enter a number :");
    scanf("%d",&n);
    temp = n;
    do{
    r = temp%10;
    printf("%d",r);
    temp = temp/10;
    }
    while (temp!=0);
    printf(" is the reverse number.");
    return 0;
}
    