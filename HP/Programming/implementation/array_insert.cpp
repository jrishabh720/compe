#include<iostream>

using namespace std;

int main()
{
	long N; 
	int Q;
	cin>>N;
	cin>>Q;
	int arr[N];
	for(long i=0; i<N; i++)
	{
		cin>>arr[i];
	}
	while(Q--)
	{
		int q,l,r;
		cin>>q>>l>>r;
		if(q==1)
		{
			arr[l] = r;
 		}
 		else
 		{
 			if(l<=r)
 			{
 				int sum = 0;
 				for(int p=l; p<=r; p++)
 				{
 					sum += arr[p];
				}
				cout<<sum<<endl;
			 }
			 else
			 {
			 	cout<<"-1"<<endl;
			 }
		 }
	}
}
