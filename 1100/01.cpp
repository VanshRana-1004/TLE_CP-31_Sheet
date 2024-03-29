// Problem Link : https://codeforces.com/problemset/problem/1917/B
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
        unordered_map<char,int> keep;
        for(i=0;i<n;i++) if(keep.find(s[i])==keep.end()) keep[s[i]]=n-i;
        for(auto x : keep) ans+=x.second;
        cout<<ans<<endl;
    }
}
/*
ababa
i=0 possible strings can be ababa,aaba,aba,aa,a
i=1 possible strings can be baba,bba,ba,b
i=2 not possible as starting from 'a' has already been counted 
similarily for i=3('b') and i=4('a')
*/ 
