// Problem Link : https://codeforces.com/problemset/problem/1904/B
#include <bits/stdc++.h>
using namespace std;
#define uni unsigned long long int
#define pp pair<uni,uni>
int main()
{
    int t;
    cin>>t;
    while(t--){
        uni n,i;
        cin>>n;
        vector<pp> nums(n),store(n);
        for(i=0;i<n;i++) cin>>nums[i].first,nums[i].second=i;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++) store[i].first=nums[i].first;
        for(i=1;i<n;i++) nums[i].first+=nums[i-1].first;
        uni ind=nums[n-1].second,tmp;
        store[ind].second=n-1;
        for(i=n-2;i>=0;i--){
            ind=nums[i].second;
            tmp=nums[i+1].second;
            if(nums[i].first>=store[i+1].first) store[ind].second=store[tmp].second;
            else store[ind].second=i;
            if(i==0) break;
        }
        for(i=0;i<n;i++) cout<<store[i].second<<" ";
        cout<<endl;
    }
}
