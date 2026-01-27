#include<stdio.h>
int main(){
    int i=1,n,m,g,l;
    printf("enter two values : ");
    scanf("%d %d",&n,&m);
    if(n!=0 && n!=1 && m!=0 && m!=1){
    do{
          if(m%i==0 && n%i==0)
          {
            g=i;
          }
          i++;
    }while(i<=n && i<=m);
    }
    printf("the gcd is : %d\n", g);
    l = m*n/g;
    printf("the lcm is : %d",l);
    return 0;

}