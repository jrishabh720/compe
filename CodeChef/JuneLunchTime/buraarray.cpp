// PJ
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;
	cin>>test;
	while(test--)
	{
		ll n,q;
		ll s=0;
		ll sum = 0;
		cin>>n>>q;
		ll arr[n+1];
		for(ll i=1; i<=n; i++)
		{
			arr[i] = i;
		}
		
		while(q--)
		{
			int ch; 
			cin>>ch;
			if(ch ==1){
				ll p;
				cin>>p;
				arr[p+s] = 0;
//				for(ll i=1; i<=n; i++)
//				{
//					cout<<arr[i];
//				}
//				cout<<endl;
			}
			else{
				ll x, y;
				ll *temp;
				cin>>x>>y;
				x = x+ s;
				y = y + s+ 1;
				//cout<<"x: "<<x<<" y: "<<y<<endl;
				temp = max_element(arr+x, arr+y);
				cout<<*temp<<endl;
				sum+=*temp;
				s = (sum)%n;
				//cout<<"s "<<s<<endl;
			}
		}
	}
	    
    
    return 0;
}

