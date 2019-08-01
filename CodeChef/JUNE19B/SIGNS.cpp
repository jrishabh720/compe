// PJ
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;      
  
    x = x % p;  
               
    while (y > 0) 
    { 
        
        if (y & 1) 
            res = (res*x) % p;     
        y = y>>1; 
        x = (x*x) % p;   
    } 
    return res; 
} 


int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll k;
        cin>>k;
        ll ans = power(2,k-1,1000000007);
        cout<<ans<<"0"<<endl;
        
    }
}
