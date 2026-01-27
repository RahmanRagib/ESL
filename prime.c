#include<stdio.h>
int main(){
    int i,n,flag;
    printf("enter a value : ");
    scanf("%d",&n);
   if(n==1){
    printf("not prime");
   }
   else if(n==2){
    printf("prime");
   }
   else if(n>2){
    flag = 1;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
         flag = 0;
         break;
        }
    }
    if(flag==1){
        printf("prime");
    }
    else{
        printf("not prime");
    }
   }
   return 0;
}