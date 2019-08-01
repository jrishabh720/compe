#include<iostream>

using namespace std;

int main()
{
	int n;
	int count = 1;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	for(int j=0; j<n-1; j++)
	{
		int diff = arr[j+1]- arr[j];
		if(diff<0)
		{
			count++;
		}
	}
	cout<<count;
	
	
}
