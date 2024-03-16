// Problem Link : https://codeforces.com/problemset/problem/1794/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i=0,x;
        cin>>n;
        vector<int> arr;
        while(i++<n){
            cin>>x;
            arr.push_back(x);
        }
        arr[0]++;
        for(i=1;i<n;i++){
            arr[i]++;
            if(arr[i]%arr[i-1]==0) arr[i]++;
        } 
        for(i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}
