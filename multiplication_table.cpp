#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,sum;
    cout<<"enter two values : ";
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {   
            sum = i*j;
            cout<<i<<"*"<<j<<"="<< sum<<endl;
        }
        cout<<endl;
    }
    return 0;
}