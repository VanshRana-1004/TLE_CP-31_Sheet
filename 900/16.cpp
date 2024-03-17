// Problem Link : https://codeforces.com/problemset/problem/1666/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        unordered_map<char,int> mp;
        vector<vector<int>> ind(26);
        vector<int> store;
        int f=0;
        for(int i=0;i<b.length();i++) mp[b[i]]++;
        for(int i=0;i<a.length();i++) if(mp.find(a[i])!=mp.end()) ind[a[i]-'A'].push_back(i);
        for(int i=0;i<b.length();i++) while(ind[b[i]-'A'].size()>mp[b[i]]) ind[b[i]-'A'].erase(ind[b[i]-'A'].begin());
        for(int i=0;i<b.length();i++){
            if(ind[b[i]-'A'].size()==0){
                cout<<"NO"<<endl,f=1;
                break;
            } 
            store.push_back(ind[b[i]-'A'][0]);
            ind[b[i]-'A'].erase(ind[b[i]-'A'].begin());
        }
        if(f==0){
            for(int i=0;i<store.size()-1;i++){
                if(store[i]>store[i+1]){
                    cout<<"NO"<<endl,f=1;
                    break;
                }
            } 
        }
        if(f==0) cout<<"YES"<<endl;
    }
}
