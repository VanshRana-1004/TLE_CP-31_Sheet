// Problem Link : https://codeforces.com/problemset/problem/1807/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i,x,n,q;
        cin>>n>>q;
        vector<unsigned long long int> arr,left(n,0),right(n,0);
        for(i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        for(i=1;i<n;i++) left[i]=left[i-1]+arr[i];
        for(i=n-2;i>=0;i--) right[i]=right[i+1]+arr[i];
        for(i=0;i<q;i++){
            int l,r,k;
            cin>>l>>r>>k;
            unsigned long long int s=(r-l+1)*k;
            if(l-2>=0) s+=left[l-2];
            if(r<n) s+=right[r];
            if(s%2==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }   
}
