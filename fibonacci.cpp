#include<bits/stdc++.h>
using namespace std;
int main () {
    int i,n,f=0,s=1,next;
    cout<<"enter a value : ";
    cin>>n;
    if(n==1){
        cout<<"0"<<endl;
    }
    else if(n>=2) {
        cout<<"0 1 ";
        for(i=3;i<=n;i++){
            next = f + s;
            cout<<next<<" ";
            f = s;
            s = next;
        }
    }
    return 0;
}
