// Problem Link : https://codeforces.com/problemset/problem/1537/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int r,c,x,y;
        cin>>r>>c>>x>>y;
        if(x==1) cout<<r<<" "<<1<<" "<<r<<" "<<c<<endl;
        else if(y==1) cout<<1<<" "<<c<<" "<<r<<" "<<c<<endl;
        else if(x==r) cout<<1<<" "<<1<<" "<<1<<" "<<c<<endl;
        else if(y==c) cout<<1<<" "<<1<<" "<<r<<" "<<1<<endl;
        else{
            if(x-1<r-x) cout<<1<<" "<<1<<" "<<r<<" "<<c<<endl;
            else cout<<r<<" "<<1<<" "<<1<<" "<<c<<endl;
        }
    }
}
