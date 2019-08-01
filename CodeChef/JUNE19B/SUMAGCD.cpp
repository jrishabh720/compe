// PJ
#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;


bool isPrime(ll n) 
{ 
	
	if (n <= 1) return false; 
	if (n <= 3) return true; 


	if (n%2 == 0 || n%3 == 0) return false; 

	for (ll i=5; i*i<=n; i=i+6) 
		if (n%i == 0 || n%(i+2) == 0) 
		return false; 

	return true; 
} 



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
    	vector<ll> vec1, vec2;
    	int n;
    	cin>>n;
    	ll arr[n];
    	ll sum1=0;
    	for(int i=0; i<n; i++)
    	{
    		cin>>arr[i];
    		if(isPrime(arr[i]))
    		{
    			vec1.push_back(arr[i]);
    			
			}
			else
			{
				vec2.push_back(arr[i]);
			}	
    		
		}
		ll gcd1 = 1;
		if(vec1.size() == 1)
		{
			gcd1 = vec1[0];
		}
		
		ll gcd2 = vec2[0];
		for(int i=0; i<vec2.size(); i++)
		{
			gcd2 = __gcd(gcd2, vec2[i]);
			
		}
		cout<<gcd1+gcd2<<endl;
		
	}
    
    return 0;
}

