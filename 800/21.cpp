// Problem Link : https://codeforces.com/problemset/problem/1829/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,ans=0,cnt=0;
        cin>>n;
        while(n--){
            cin>>x;
            if(x==0) cnt++;
            else ans=max(ans,cnt),cnt=0;
        }
        ans=max(ans,cnt);
        cout<<ans<<endl;
    }
}
