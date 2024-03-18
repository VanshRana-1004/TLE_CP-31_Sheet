// Problem Link : https://codeforces.com/problemset/problem/1665/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,x,p=0;
        cin>>n;
        map<int,int> cnt;
        for(i=0;i<n;i++){
            cin>>x;
            cnt[x]++;
            p=max(p,cnt[x]);
        }
        int ans=n-p;
        while(p<n) ans++,p+=p;
        cout<<ans<<endl;
    }
}
