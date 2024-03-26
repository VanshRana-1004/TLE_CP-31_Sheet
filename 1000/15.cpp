// Problem Link : https://codeforces.com/problemset/problem/1690/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i,n,k,ans=INT_MAX,sum=0;
        char ch,pre;
        cin>>n>>k;
        string s;
        for(i=0;i<n;i++){
            cin>>ch;
            s.push_back(ch);
        }
        for(i=0;i<k;i++) if(s[i]=='W') sum++;
        ans=sum;
        for(i=1;i<=n-k;i++){
            if(s[i-1]=='W') sum--;
            if(s[i+k-1]=='W') sum++;
            ans=min(ans,sum);
        }
        cout<<ans<<endl;
    }
}
