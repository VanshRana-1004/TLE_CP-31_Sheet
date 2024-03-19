// Problem Link : https://codeforces.com/problemset/problem/1606/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i,a=0,b=0,n=s.length();
        for(i=0;i<s.length()-1;i++){
            if(s[i]=='a' && s[i+1]=='b') a++;
            if(s[i]=='b' && s[i+1]=='a') b++;
        }
        if(a==b) cout<<s<<endl;
        else{
            if(a>b) s[0]='b';
            else s[n-1]='b';
            cout<<s<<endl;
        }
    }
}
