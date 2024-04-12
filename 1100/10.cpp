// Problem Link : https://codeforces.com/contest/1842/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>> t;
    while(t--){
        int n,x,i,cur=0,f=0,a,j=0;
        cin>>n>>x;
        for(j=0;j<3;j++){
            vector<int> s(n);
            for(i=0;i<n;i++) cin>>s[i];
            for(i=0;i<n && f==0;i++){
                a=x|s[i];
                if(a==x){
                    cur=cur|s[i];
                    if(cur==x){
                        f=1;
                        break;
                    }
                }
                else break;
            }
        }
        if(f==1 || x==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
