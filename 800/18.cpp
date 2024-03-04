// Problem Link : https://codeforces.com/problemset/problem/1837/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n%x!=0){
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else{
            int n1=n;
            while(n1%x==0) n1--;
            cout<<2<<endl;
            cout<<n1<<" "<<n-n1<<endl;
        }
    }
}
