#include<bits/stdc++.h>
#include<vector>

using namespace std;


int main()
{
	int n,q1,q,val,l,r;
	
	cin>>n>>q1;
	int arr[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	
	for(int i=0; i<q1; i++)
	{
		cin>>q;
		if( q== 1)
		{
			cin>>val;
			arr[val-1] = 1 - arr[val-1];
			 
		}
		if( q == 0)
		{
			cin>>l>>r;
			if(arr[r-1] == 1)
			{
				cout<<"ODD\n";
				
			}
			else{
				cout<<"EVEN\n";
			}
		}
	}
}

