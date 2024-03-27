// Problem Link : https://codeforces.com/problemset/problem/1704/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,i,v,left,right,ans=0;
        cin>>n>>x;
        for(i=0;i<n;i++){
            cin>>v;
            if(i==0) left=v-x,right=v+x;
            else{
                left=max(left,v-x);
                right=min(right,v+x);
                if(left>right) ans++,left=v-x,right=v+x;
            }
        }
        cout<<ans<<endl;
    }
}
