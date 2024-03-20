// Problem Link : https://codeforces.com/problemset/problem/1543/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int a,b; // gcd(a,b)=gcd(a-b,b) assume a>b
        // we can't change a-b (it is max gcd we can obtain) our target is to found the minimum number of oprations to make b multiple of a-b
        cin>>a>>b;
        if(a==b) cout<<0<<" "<<0<<endl;         // in case of infinite excitement
        else{
            if(a<b) swap(a,b);
            cout<<a-b<<" "<<min(b%(a-b),(a-b)-b%(a-b))<<endl;
            // b%(a-b) -> number of decrements required in b to make it multiple of (a-b)
            // (a-b)-b%(a-b) -> number of increments required in b to make it multiple of (a-b)
        }
    }
}
