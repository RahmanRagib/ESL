//finds max of two
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int mx = max(x,y);//finds max of two
    cout<< mx <<endl;
 return 0;

}

//for more than twice
#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,w,x,y,z;
    cin>>q>>w>>x>>y>>z; 
int mx4 = max({q,w,x,y,z});
    cout<< mx4 <<endl;
    
 return 0;

}
//for min use 'min()' or  'min({})'