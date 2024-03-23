// Problem Link : https://codeforces.com/problemset/problem/1411/B
#include <bits/stdc++.h>
using namespace std;
bool check(unsigned long long int n){
    unsigned long long int a=n;
    while(a>0){
        int r=a%10;
        if(r!=0 && n%r!=0) return false;
        a/=10;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n;
        cin>>n;
        while(true){
            if(check(n)) break;
            n++;
        }
        cout<<n<<endl;
    }
}   
