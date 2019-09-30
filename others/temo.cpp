#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
    	ll n,m;
    	cin>>n>>m;
    	ll arr[m+1] = {0};
    	while(n--)
    	{
    		ll d,v;
    		cin>>d>>v;
    			if(arr[d]<v)
    			{
    				arr[d] = v;
				}
			
		}
		sort(arr, arr+m+1, greater<ll>());
		cout<<arr[0]+arr[1]<<endl;
	}
    
    return 0;
}
