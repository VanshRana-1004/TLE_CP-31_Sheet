// Problem Link : https://codeforces.com/contest/1624/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,m;
        cin>>a>>b>>c;
        if((a==b && b==c) || (a-b==b-c)) cout<<"YES"<<endl; // a-b=b-c
        else if((a+c)%(2*b)==0) cout<<"YES"<<endl;  // 2b=a+c
        else if((2*b-a)>0 && (2*b-a)%c==0) cout<<"YES"<<endl; //2b-a=c
        else if((2*b-c)>0 && (2*b-c)%a==0) cout<<"YES"<<endl; //2b-c=a
        else cout<<"NO"<<endl;
    }
}
