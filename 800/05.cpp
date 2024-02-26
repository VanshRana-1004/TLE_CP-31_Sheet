// Problem Link : https://codeforces.com/problemset/problem/1896/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,x;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++){
            cin>>x;
            arr[i]=x;
        }
        if(arr[0]!=1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
