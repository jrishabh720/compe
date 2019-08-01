#include<iostream>

using namespace std;

int main()
{
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,z;
		cin>>n>>z;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		
		int arr1[n] = {0};
		for(int i=0; i<n; i++)
		{
			arr1[i] = arr[i];
	    }
	    while(z--)
	    {
		    for(int i=0; i<n-1; i=i+2)
			{
				if(arr[i] == 0 && arr[i+1] ==1)
				{
					arr1[i] = 1;
					arr1[i+1] = 0;
				
				}
					
					
			}
			for(int i=0; i<n; i++)
			{
				arr[i]= arr1[i];
				
			}	
				
		}
		for(int i=0;  i<n; i++)
		{
			cout<<arr1[i]<<" ";
		}
	
	}
}
