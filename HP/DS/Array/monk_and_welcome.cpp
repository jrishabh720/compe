#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr1[n], arr2[n], arr3[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>arr1[i];
	}
	for(int i=0; i<n; i++)
	{
		cin>>arr2[i];
	}
	
	for(int i=0; i<n; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<arr3[i]<<" ";
	}
	
}
