// giving TLE;
#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,q;
	cin>>n>>q;
	int arr[n];
    int m[n];
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		sum+=arr[i];
		m[i] = sum;
		 
	}
	while(q--)
	{
		int sum = 0;
		int l,r;
		cin>>l>>r;
		cout<<(m[r-1]-m[l-2])/(r-l+1)<<endl;
		
	}
}
