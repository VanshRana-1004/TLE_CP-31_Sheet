// Problem Link : https://codeforces.com/problemset/problem/1691/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i,n,x,pre,cnt,s,flag=0;
        cin>>n;
        vector<int> store;
        for(i=0;i<n;i++){
            cin>>x;
            if(i==0) s=0,pre=x,cnt=1;
            else if(pre==x) cnt++;
            else{
                if(cnt==1) flag=1;
                store.push_back(i);
                s++;
                while(s<i) store.push_back(s),s++;
                s=i;
                cnt=1;
                pre=x;
            }
        }
        if(cnt==1) flag=1;
        else{
            store.push_back(n);
            s++;
            while(s<n) store.push_back(s),s++;
        }
        if(flag==1) cout<<-1;
        else for(i=0;i<n;i++) cout<<store[i]<<" ";
        cout<<endl;
    }
}
