// Problem Link : https://codeforces.com/problemset/problem/1903/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int x,i,flag=0;
        for(i=0;i<n;i++){
            cin>>x;
            arr[i]=x;
        }
        for(i=0;i<n-1;i++) if(arr[i]>arr[i+1]) flag=1;
        if(k>1 || flag==0) cout<<"YES"<<endl;  
        else cout<<"NO"<<endl;
        t--; 
    }
}
