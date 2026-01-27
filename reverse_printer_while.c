#include<stdio.h>
int main(){
    int n,r,temp;
    printf("enter a value : ");
    scanf("%d",&n);
    temp = n;
    while(temp!=0)
    {
    r = temp%10;
    temp = temp/10;
    printf("%d",r);
    }
    printf("\n");
    printf("is the reverse print ."); 
    return 0;
}