// Problem Link : https://codeforces.com/problemset/problem/1312/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,x;
        cin>>n;
        vector<int> arr;
        for(i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.rbegin(),arr.rend());
        for(i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}
