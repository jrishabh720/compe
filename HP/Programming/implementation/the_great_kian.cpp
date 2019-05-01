#include<iostream>

using namespace std;

int main()
{
	int N;
	cin>>N;
	long long arr[N];
	for(int i=0; i<N; i++)
	{
		cin>>arr[i];
		
	}
    long long a =0;
	long long b =0;
	long long c =0;
	for(int i=0; i<N; i=i+3)
	{
		a+=arr[i];
	}
	for(int i=1; i<N; i=i+3)
	{
		b+=arr[i];
	}
	for(int i=2; i<N; i=i+3)
	{
		c+=arr[i];
	}
	cout<<a<<" "<<b<<" "<<c;
}
