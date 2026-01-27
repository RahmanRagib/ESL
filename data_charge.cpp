#include<bits/stdc++.h>
using namespace std;
int main() 
{
    double i,sum,sum2;
    cout<<"enter a value : ";
    cin>>i;

    if(i<=10){
    sum = i*20;
    sum2 = sum + .1*sum;
    cout<<"your bill is "<<sum2;
    }

    else if(i<30 && i>10){
    sum = i*15;
    sum2 = sum + .1*sum;
    cout<<"your bill is "<<sum2;
    }

    else if(i>=30){
    sum = i*10;
    sum2 = sum + .1*sum;
    cout<<"your bill is "<<sum2;
    }
    return 0;
}