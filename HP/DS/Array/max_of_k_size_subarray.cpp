#include<iostream>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		
	}
	
	int lend = n-k;
	int rend = n-1;
	int lstart = 0;
	int rstart = k-1;
	
	while(lstart<=lend && rstart<=rend)
	{
		int max = 0;
		for(int i=lstart; i<=rstart; i++)
		{
			
			if(max<=arr[i])
			{
				max=arr[i];
			}
			
		}
		lstart++;
		rstart++;
		cout<<max<<" ";
		
	}
}
