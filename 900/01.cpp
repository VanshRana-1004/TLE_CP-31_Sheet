// Problem Link : https://codeforces.com/problemset/problem/1904/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,xk,yk,xq,yq;
        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;
        unordered_map<int,unordered_map<int,bool>> mp;
        set<pair<int,int>> st;
        mp[xk+a][yk+b]=true;
        mp[xk-a][yk+b]=true;
        mp[xk+a][yk-b]=true;
        mp[xk-a][yk-b]=true;
        mp[xk+b][yk+a]=true;
        mp[xk-b][yk+a]=true;
        mp[xk+b][yk-a]=true;
        mp[xk-b][yk-a]=true;
        if(mp[xq+a][yq+b]==true) st.insert({xq+a,yq+b});
        if(mp[xq-a][yq+b]==true) st.insert({xq-a,yq+b});
        if(mp[xq+a][yq-b]==true) st.insert({xq+a,yq-b});
        if(mp[xq-a][yq-b]==true) st.insert({xq-a,yq-b});
        if(mp[xq+b][yq+a]==true) st.insert({xq+b,yq+a});
        if(mp[xq-b][yq+a]==true) st.insert({xq-b,yq+b});
        if(mp[xq+b][yq-a]==true) st.insert({xq+b,yq-a});
        if(mp[xq-b][yq-a]==true) st.insert({xq-b,yq-a});
        cout<<st.size()<<endl;
    }
}
