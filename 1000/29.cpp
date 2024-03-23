// Problem Link : https://codeforces.com/problemset/problem/1362/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int a,b,ans=0;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else{
            if(a>b) swap(a,b);
            if(b%a!=0) cout<<-1<<endl;
            else{
                b/=a;
                while(b%8==0) ans++,b/=8;
                while(b%4==0) ans++,b/=4;
                while(b%2==0) ans++,b/=2;
                if(b==1) cout<<ans<<endl;
                else cout<<-1<<endl;
            }
        }
        
    }
}
