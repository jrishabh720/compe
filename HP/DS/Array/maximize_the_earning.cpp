#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		
		int N, r;
		cin>>N>>r;
		int arr[N];
		for(int i=0; i<N; i++)
		{
			cin>>arr[i];
		}
		int max=0.5;
		int c=0;
		for(int i=0; i< N; i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
				c++;
			}
			
		}
		cout<<c*r<<endl;
	}
}
