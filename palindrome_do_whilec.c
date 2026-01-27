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
    if(temp==r){
    printf(" is a palindrome.");
    }
    else{
    printf(" is not a palindrome.");
    }
    return 0;
}
    