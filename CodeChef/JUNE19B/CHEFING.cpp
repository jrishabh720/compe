// PJ
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull MOD = 1000000007;
    ull test;
    cin>>test;
    while(test--)
    {
    	ull K,N;
    	cin>>N>>K;
    	ull sum = (K-1)%MOD;
    	ull sum2 = (((K-1)/2)%MOD - (N/2)%MOD)%MOD;
    	sum = (sum + sum2)%MOD;
    	cout<<sum<<endl;
    	
	}
    
    return 0;
}

