#include<stdio.h>
int main()
{
    int i,f,s,next,n;
    printf("enter a value : ");
    scanf("%d",&n);
    if(n==1){
      printf("0");
    }
    else if(n>=2){
      printf("0 1 ");
      for(i=3;i<=n;i++)
      {
        next = f + s;
        printf("%d",next);
        f=s;
        s=next;
      }
    }
}