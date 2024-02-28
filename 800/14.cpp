// Problem Link : https://codeforces.com/problemset/problem/1858/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+c>b+c) cout<<"First"<<endl;
        else if(a+c<b+c) cout<<"Second"<<endl;
        else if(c%2==0) cout<<"Second"<<endl;
        else  cout<<"First"<<endl;
    }
}
