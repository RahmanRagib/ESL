#include<stdio.h>
int main() {
    int i,n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n<=10){
    for(i=1;i<=n;i++)
    {
        printf("*\n");
    }
    }
    else
    {
        printf("error");
    }

    return 0;
    }

