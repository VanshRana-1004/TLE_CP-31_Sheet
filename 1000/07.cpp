// Problem Link : https://codeforces.com/problemset/problem/1831/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,x,pre,cnt=0,ans=0;
        cin>>n;
        unordered_map<int,pair<int,int>> mp;
        for(i=0;i<n;i++){
            cin>>x;
            if(i==0) pre=x,cnt++;
            else if(pre==x) cnt++;
            else{
                if(mp.find(pre)==mp.end()) mp[pre].first=cnt;
                else mp[pre].first=max(mp[pre].first,cnt);
                cnt=1;
                pre=x;
            }
        }
        if(mp.find(pre)==mp.end()) mp[pre].first=cnt;
        else mp[pre].first=max(mp[pre].first,cnt); 
        for(i=0;i<n;i++){
            cin>>x;
            if(i==0) pre=x,cnt=1;
            else if(pre==x) cnt++;
            else{
                if(mp.find(pre)==mp.end()) mp[pre].second=cnt;
                else mp[pre].second=max(mp[pre].second,cnt);
                cnt=1;
                pre=x;
            }
        }
        if(mp.find(pre)==mp.end()) mp[pre].second=cnt;
        else mp[pre].second=max(mp[pre].second,cnt);        
        for(auto x : mp) ans=max(ans,x.second.first+x.second.second);
        cout<<ans<<endl;
    }
}
