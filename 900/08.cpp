// Problem Link : https://codeforces.com/problemset/problem/1837/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i=0,cnt,ans=2,n;
        cin>>n;
        string s;
        cin>>s;
        while(i<n-1){
            cnt=2;
            while(i<n-1 && s[i]==s[i+1]) i++,cnt++;
            ans=max(ans,cnt);
            i++;
        }
        cout<<ans<<endl;
    }
}   
