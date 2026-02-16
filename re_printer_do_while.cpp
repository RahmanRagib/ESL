#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rev=0,rem;
    cout<<" Enter a number :";
    cin>>n;
    do{
        rem = n%10;
        rev = rev*10 + rem;
        cout<<rev;
        n=n/10;
    }
    while(n!=0);
    return 0;
}