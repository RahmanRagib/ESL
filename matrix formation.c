#include<stdio.h>
int main() 
{
    int i,j,m,n;
    printf("enter the values : ");
    scanf("%d %d", &m,&n);
    for(i=1;i<=m;i++)
    {  
        for(j=1;j<=m;j++)
        { 
            printf("*");
        }
        #to seperate the lines \n is used
          printf("\n"); 
    }
}