// Problem Link : https://codeforces.com/problemset/problem/1418/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int x,y,k,s,ans=0;
        cin>>x>>y>>k;  
        // we required k number of second type trade to get k coals 
        // now the number of first type trade are :
        // required sticks : (y*k)(for coals) + (k-1)(for sticks as we already have 1 in starting)
        // in each first type of trade we get (x-1) sticks;
        // i.e. 1 trade gives (x-1) sticks
        // let t trades gives (y*k)+(k-1) sticks
        // then t=((y*k)+(k-1))/(x-1) which will be our required trades to get required number of sticks
        // resultant trades will be t+k(to convert sticks into coals)
        if(((y*k)+(k-1))%(x-1)!=0) ans++;
        ans+=((y*k)+(k-1))/(x-1)+k;
        cout<<ans<<endl;
    }
}
