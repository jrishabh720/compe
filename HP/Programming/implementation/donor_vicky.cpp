#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int arr[n] = {0};
		for(int i=1; i<=n; i++)
		{
			arr[i] += i;
		}
		int flag =0;
		for(int i=1; i<n; i++)
		{
			if(x>arr[i])
			{
				x=x-arr[i];
				
			}
			else
			{
				cout<<i<<endl;
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			int iteration = x/arr[n];
			for(int i =0; i<iteration)
	        for(int i=1; i<=n; i++)
	        {
	        	arr[i] += i;
	            if(x>arr[i])
				{
					x=x-arr[i];
					
				}
				else
				{
					cout<<i<<endl;
					break;
				}
	        	
			}
			
		}

	}
}
