#include<stdio.h>
int main(){
    int i,n,m,g,l;
    printf("enter two values : ");
    scanf("%d %d",&n,&m);
    if(n!=0 && n!=1 && m!=0 && m!=0){
        for(i=1;i<=n && i<=m;i++)
        {
           if(m%i==0 && n%i==0)
        {
         g=i;
        }
        }
    printf("the gcd is %d\n",g);
    l= n*m/g;
    printf("the lcm is %d",l);
    }
    return 0;
}