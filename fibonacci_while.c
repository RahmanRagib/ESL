#include<stdio.h>
int main(){
    int i=3,n,f=0,s=1,nx;
    printf("enter a value : ");
    scanf("%d",&n);
    if(n==1){
        printf("0 ");
    }
    else if(n>=2){
        printf("0 1 ");
        while(i<=n){
             nx = f + s;
             printf("%d ",nx);
             i++;
             f = s;
             s = nx;
        }
    }
}