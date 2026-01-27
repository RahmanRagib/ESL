#include<bits/stdc++.h>
#include <iostream>
int main()
{
    int i,n,flag;
    cout<<"enter a value :";
    cin>>n;
    if(n==1)
      cout<<"not prime";
    else if(n==2)
      cout<<"prime";
    else if(n>2)
     flag = 1;
    for(i=2;i<=n/2;i++){
        if(i%n==0){
        flag = 0;
        cout<<"not prime"<<break;
    }
    else if(flag=1){
    cout<<"prime";
    }
}
return 0;
}