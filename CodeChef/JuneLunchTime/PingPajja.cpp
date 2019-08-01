// PJ
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	ll x,y,k;
    	cin>>x>>y>>k;
    	ll temp = x+y;
    	ll temp1 = temp/k;
    	if(temp1%2 == 0){
    		cout<<"Chef"<<endl;
		}
		else{
			cout<<"Paja"<<endl;
		}
	}
    
    
    return 0;
}

