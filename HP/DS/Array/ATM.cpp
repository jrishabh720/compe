#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n+2];
	arr[n] = -1;
	arr[0] = -1;
	int count = 1;
	for(int i=1; i<n+1; i++)
	{
		cin>>arr[i];
		if(arr[i-1]>arr[i])
		{
			cout<<arr[i]<<" ";
			++count;
		}
	}
	cout<<count;
}
