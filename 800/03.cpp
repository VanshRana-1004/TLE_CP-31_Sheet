// Problem Link : https://codeforces.com/problemset/problem/1900/A
#include <bits/stdc++.h>
using namespace std;
int solve(string s){
    int c1=0,c2=0,i=0;
    while(i<s.length()){
        c1=0;
        while(i<s.length() && s[i]=='#') i++;
        while(i<s.length() && s[i]=='.') c1++,i++;
        if(c1>=3) return 2;
        c2+=c1;
        i++;
    }
    return c2;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char ch;
        string s;
        while(n--){
            cin>>ch;
            s.push_back(ch);
        }
        int ans=solve(s);
        cout<<ans<<endl;
    }
}
