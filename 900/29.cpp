// Problem Link : https://codeforces.com/problemset/problem/1380/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,i,j,k;
        cin>>n;
        vector<int> arr;
        for(i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        for(j=1;j<n-1;j++){
            i=j-1;
            k=j+1;
            while(i>=0 && arr[i]>arr[j]) i--;
            while(k<n && arr[j]<arr[k]) k++;
            if(i>=0 && k<n) break;
        }
        if(i>=0 && k<n){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
