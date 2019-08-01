#include<iostream>

using namespace std;

int main()
{
	long n;
	cin>>n;
	int arr[n];
	for(long i =0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(long j=0; j<n; j++)
	{
		int flag =0;

		for(long p=j+1; p<n; p++)
		{
			if(arr[j]<arr[p])
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			cout<<arr[j]<<" ";
		}
	}
	
	
}
