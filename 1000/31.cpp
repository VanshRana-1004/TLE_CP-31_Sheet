// Problem Link : https://codeforces.com/problemset/problem/1155/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
