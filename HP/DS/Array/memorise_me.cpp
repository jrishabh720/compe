#include<iostream>

using namespace std;

int main()
{
	int n;
	int quer;

	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	
	cin>>quer;
	
	
	for(int j=0; j<quer; j++)
	{
		int count = 0; 
		int q;
		cin>>q;
		for(int i=0; i<n; i++)
		{
			if(q == arr[i])
			{
				count++;
			}
			
		}
		if(count != 0)
		{
			cout<<count;
			
		}
		else
		{
			cout<<"NOT PRESENT";
		}
	}
	
}
