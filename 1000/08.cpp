// Problem Link : https://codeforces.com/problemset/problem/1791/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i,n,ans=0;
        cin>>n;
        string s;
        cin>>s;
        vector<int> left(n,0),right(n,0),cnt(26,0);
        left[0]=1;
        cnt[s[0]-'a']=1;
        for(i=1;i<n;i++){
            if(cnt[s[i]-'a']==0) left[i]=left[i-1]+1,cnt[s[i]-'a']=1;
            else left[i]=left[i-1];
        }
        cnt.clear();
        for(i=0;i<26;i++) cnt[i]=0;
        right[n-1]=1;
        cnt[s[n-1]-'a']=1;
        for(i=n-2;i>=0;i--){
            if(cnt[s[i]-'a']==0) right[i]=right[i+1]+1,cnt[s[i]-'a']=1;
            else right[i]=right[i+1];
        }
        for(i=0;i<n-1;i++) ans=max(ans,left[i]+right[i+1]);
        cout<<ans<<endl;
    }
}
