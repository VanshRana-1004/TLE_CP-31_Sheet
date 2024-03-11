// Problem Link : https://codeforces.com/problemset/problem/1883/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,i=0;
        cin>>n>>k;
        char ch;
        vector<int> cnt(26,0);
        while(i++<n){
            cin>>ch;
            cnt[ch-'a']++;
        }
        int f=0,r=n-k;
        if(r%2==1) f=1,r--;
        for(i=0;i<26;i++){
            if(cnt[i]>0){
                int x=cnt[i];
                if(x%2==1) f=0,x--;
                r-=x;
                if(r<0) f=0;
                if(r<=0 && f==0) break;
            }
        }
        if(r<=0 && f==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
