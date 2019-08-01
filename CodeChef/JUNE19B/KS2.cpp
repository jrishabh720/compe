// PJ
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
    	ll n;
    	cin>>n;
    	ll temp = n;
    	ll res = 0;
    	ll highest = pow(2,64);
    	while(n>0){
            res += n%10;
            n /= 10;
    	}
    	ll index = 0;
    	for(ll i=0; i<10; i++){
            if((res+i)%10 == 0)
            {
                index = i;
                break;

            }
        }
    	cout<<temp<<index<<endl;
	}


    return 0;
}

