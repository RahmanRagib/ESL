#include<stdio.h>
int main() {
    int x,b,d,y;
    printf("Enter your balance : ");
    scanf("%d",&b);
    printf("Enter an option : ");
    scanf("%d",&x);
    switch(x){
    case 1 : {
       if(b>100000){
       printf("your balance is sufficient to withdraw\n");
           printf("Enter a amount to withdraw : ");
           scanf("%d",&d);
           if(d<b){
            printf("succesfully withdrawn");
           }
           else{
             printf("invalid amount.");
           }   
        }
        else{
            printf("insufficient amount");
        }
        break;
    }
    case 2 : {
       printf("enter an amount to deposit : ");
       scanf("%d",&y);
       printf("successfully deposited");
        break;
    }
    }
    return 0;
}
