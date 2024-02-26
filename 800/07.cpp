// Problem Link : https://codeforces.com/problemset/problem/1881/A
#include <bits/stdc++.h>
using namespace std;
int get(int i,string x,string &s){
    int l=s.length(),cnt=0;
    while(true){
        if(x.length()>=s.length() && x.substr(i,l)==s) break;
        cnt++;
        string a=x+x;
        x=a;
    }
    return cnt;
}
int solve(string x,string s,int n,int m){
    if(x.length()>=s.length() && x.substr(0,s.length())==s) return 0;
    int i=0,ans=INT_MAX,l=0;
    vector<int> start;
    for(i=0;i<n;i++) if(x[i]==s[0]) start.push_back(i);
    for(i=0;i<start.size();i++){
        int ind=start[i],flag=0,j=0;
        while(ind<n && j<m){
            if(s[j]!=x[ind]){
                flag=1;
                break;
            } 
            j++;
            ind=(ind+1)%n;
        }
        if(flag==1) l++;
        if(l==start.size()) return -1;
        if(j==m) ans=min(get(start[i],x,s),ans);
    }
    if(ans==INT_MAX) return -1;
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i,n,m;
        char ch;
        cin>>n>>m;
        string x,s;
        for(i=0;i<n;i++){
            cin>>ch;
            x.push_back(ch);
        }
        for(i=0;i<m;i++){
            cin>>ch;
            s.push_back(ch);
        }
        int ans=solve(x,s,n,m);
        cout<<ans<<endl;
    }
}
