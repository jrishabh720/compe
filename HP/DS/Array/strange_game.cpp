#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int N, r, cost=0,max=0;
		cin>>N>>r;
		int alice[N], bob[N];
		for(int i=0; i<N; i++)
		{
			cin>>alice[i];
			
		}
		for(int i=0; i<N; i++)
		{
			cin>>bob[i];
			
		}
		for(int i=0; i<N; i++)
		{
			if(max<bob[i])
			{
				max=bob[i];
			}
			
		}
		
		
		
		for(int i=0; i<N; i++)
		{
			if(max>=alice[i])
			{
				cost += max+1-alice[i];
				
			}
		
		}
		cout<<cost*r<<endl;
		
		
		
		
	}
}
