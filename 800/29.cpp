// Problem Link : https://codeforces.com/problemset/problem/1777/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,i,j=0,ans=0;
        cin>>n;
        vector<int> arr;
        for(i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        i=0;
        while(j<n){
            int a=arr[i]%2,c=0;
            while(j<n && arr[j]%2==a) j++,c++;
            ans+=c-1;
            i=j;
        }
        cout<<ans<<endl;
    }
}
