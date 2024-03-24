// Problem Link : https://codeforces.com/problemset/problem/1474/B
#include <bits/stdc++.h>
using namespace std;
bool prime(long long n){
    long long a=2;
    while(a<n && n%a!=0) a++;
    if(a<n) return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long i,d,a,b,ans;
        cin>>d;
        a=1+d;
        while(!prime(a)) a++;
        b=a+d;
        while(!prime(b)) b++;
        cout<<a*b<<endl;
    }
}   
