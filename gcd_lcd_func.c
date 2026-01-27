#include<stdio.h>
int gcd(int m,int n)
    {
        int i;
        for(i=1;i<=m && i<=n;i++)
        {
            if(m%i==0 && n%i==0){
               return i;
            }
        }
        return 1;
    }
    int lcm(int m,int n)
    {
        int l;
        l = m*n/gcd(m,n);
        return l;
    }
    int main(void){
         int x,y;
         printf("enter two numbers : ");
         scanf("%d %d", &x,&y);
         printf("gcd is %d", gcd(x,y));
         printf("lcm is %d", lcm(x,y));
         return 0;
    }