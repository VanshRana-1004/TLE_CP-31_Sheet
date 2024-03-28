// Problem Link : https://codeforces.com/problemset/problem/1744/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i=0,j,ans=0;
        char ch;
        cin>>n>>ch;
        string s,s1;
        cin>>s;
        if(ch=='g') cout<<0<<endl;
        else{
            vector<int> store,green;
            for(i=0;i<n;i++) if(s[i]==ch) store.push_back(i);
            s1=s;
            s=s+s1;
            for(i=0;i<2*n;i++) if(s[i]=='g') green.push_back(i);
            for(i=0;i<store.size();i++){
                int mid,a=0,st=0,ed=green.size()-1;
                while(st<=ed){
                    mid=st+(ed-st)/2;
                    if(green[mid]>store[i]) a=green[mid],ed=mid-1;
                    else st=mid+1;
                }
                ans=max(ans,a-store[i]);
            }
            cout<<ans<<endl;
        }
    }
}
