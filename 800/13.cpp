// Problem Link : https://codeforces.com/problemset/problem/1859/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,x;
        vector<int> a,c;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        i=n-1;
        c.push_back(a[i]);
        a.pop_back();
        i--;
        while(i>=0 && c.back()==a[i]) c.push_back(a[i]),i--,a.pop_back();
        if(a.size()==0) cout<<-1<<endl;
        else {
            cout<<a.size()<<" "<<c.size()<<endl;
            for(i=0;i<a.size();i++) cout<<a[i]<<" ";
            cout<<endl;
            for(i=0;i<c.size();i++) cout<<c[i]<<" ";
            cout<<endl;
        }
    }
}
