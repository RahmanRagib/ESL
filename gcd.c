#include<stdio.h>
int main(){
    int i,n,m,gcd;
    printf("enter two numbers : ");
    scanf("%d,%d",&m,&n);
    if(n!=0 && m!=0){
    for(i=1;i<=n && i<=m;i++){
    if(n%i==0 && m%i==0){
    gcd = i;
    }
    }
    printf("%d is the GCD",gcd);
    }
    return 0;
}
