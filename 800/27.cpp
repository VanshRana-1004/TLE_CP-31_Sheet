// Problem Link : https://codeforces.com/problemset/problem/1788/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,x,c=0;
        cin>>n;
        vector<int> arr;
        for(i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        for(i=0;i<n;i++){
            if(arr[i]==2) c++;
            arr[i]=c;
        }
        if(c%2==1) cout<<-1<<endl;
        else{
            for(i=0;i<n;i++) if(arr[i]==c/2) break;
            cout<<i+1<<endl;
        }
    }
}
