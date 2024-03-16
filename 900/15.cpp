// Problem Link : https://codeforces.com/problemset/problem/1675/B
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
        if(arr[n-1]<n-1) cout<<-1<<endl;
        else{
            int f=0,ans=0;
            for(i=n-2;i>=0;i--){
                while(arr[i]>=arr[i+1]) ans++,arr[i]/=2;
                if(arr[i]<i){
                    f=1;
                    break;
                }
            }
            if(f==1) cout<<-1<<endl;
            else cout<<ans<<endl;
        }
    }
}
