// Problem Link : https://codeforces.com/problemset/problem/1853/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,mini=INT_MAX,p=0,flag=0;
        cin>>n;
        while(n--){
            cin>>x;
            if(p>x) flag=1;
            else if(p!=0) mini=min(mini,x-p);
            p=x;
        }
        if(flag==0) cout<<(mini/2)+1<<endl;
        else cout<<0<<endl; 
    }
}
