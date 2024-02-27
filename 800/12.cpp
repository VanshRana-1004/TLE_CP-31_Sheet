// Priblem Link : https://codeforces.com/problemset/problem/1862/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,i=0;
        cin>>n;
        vector<int> arr,ans;
        while(i<n){
            cin>>x;
            arr.push_back(x);
            i++;
        }
        ans.push_back(arr[0]);
        for(i=1;i<n;i++){
            if(arr[i]<arr[i-1]) ans.push_back(arr[i]);
            ans.push_back(arr[i]);
        }
        cout<<ans.size()<<endl;
        for(i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}
