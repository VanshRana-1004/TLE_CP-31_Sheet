// Problem Link : https://codeforces.com/problemset/problem/1899/C
#include <bits/stdc++.h>
using namespace std;
bool check(int f,int n){
    if(f==0 && (n%2==1 || n%2==-1)) return true;
    if(f==1 && n%2==0) return true;
    return false; 
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int f,sum=0,n,i,j,ans=INT_MIN;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++) cin>>arr[i];
        i=j=0;
        while(j<n){
            if(arr[i]%2==0) f=0;
            else f=1;
            sum=arr[i];
            ans=max(ans,sum);
            j=i+1;
            while(j<n && check(f,arr[j])){
                if(sum<0 && sum<arr[j]) sum=arr[j],i=j;
                else sum+=arr[j]; 
                ans=max(sum,ans);
                if(f==1) f=0;
                else f=1;
                j++;
            }
            while(i<j-1){
                sum-=arr[i];
                ans=max(sum,ans);
                i++;
            }
            i=j;
        }
        while(i<j-1){
            sum-=arr[i];
            ans=max(sum,ans);
            i++;
        }
        cout<<ans<<endl;
    }
}
