#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cout<<" Enter a number :";
    cin>>n;
    do{
        r = n%10;
        cout<<r;
        n=n/10;
    }
    while(n!=0);
    if(n==r){
        cout<<" is a palindrome";
    }
    else{
        cout<<" is not a palindrome";
    }
    
    return 0;
}