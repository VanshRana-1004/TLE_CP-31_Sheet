// Problem Link : https://codeforces.com/contest/1567/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> store(3*10e5+1,0);
    for(int i=1;i<store.size();i++) store[i]=store[i-1]^i;
    while(t--){
        int x,a,b,c;
        cin>>a>>b;
        x=store[a-1];
        if(x==b) cout<<a<<endl;             
        else{
            c=x^b;                      
            if(c!=a) cout<<a+1<<endl;   //x^x^b==b
            else cout<<a+2<<endl;       //x^(b^1)^(x^1)==b
        }
    }
}
