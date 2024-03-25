// Problem Link : https://codeforces.com/problemset/problem/1485/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int a,b,ans=INT_MAX,d,c,a1;
        cin>>a>>b;
        if(a==0) cout<<0<<endl;
        else if(a<b) cout<<1<<endl;
        else if(a==b) cout<<2<<endl;
        else{
            d=b;
            if(b==1) d++;
            c=d-b;
            a1=a;
            while(a1>0) a1/=d,c++;
            while(ans>=c && d<=a){
                ans=c;
                a1=a;
                d++;
                c=d-b;
                while(a1>0) a1/=d,c++;
            }
            cout<<ans<<endl;
        }
    }
}
