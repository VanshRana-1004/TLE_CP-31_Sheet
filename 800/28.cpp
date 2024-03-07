// Problem Link : https://codeforces.com/problemset/problem/1783/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,n,i,j=0,c=0,m=0,v=0;
        cin>>n;
        vector<int> arr;
        for(i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.rbegin(),arr.rend());
        swap(arr[1],arr[n-1]);
        if(arr[0]==arr[1]) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(i=0;i<n;i++) cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
}
