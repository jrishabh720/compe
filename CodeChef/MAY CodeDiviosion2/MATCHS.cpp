#include<iostream>
#define long long ll;
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int turn=0;
		int n,m;
		cin>>n>>m;
		int x,y;
		while(n!=0 || m!=0)
		{
			
			if(n<=m)
			{
				if(m%n != 0)
				{
					x--;
				}
				else
				{
					n--;
					++turn;
				}
			}	
			else
			{
				if(n%m != 0)
				{
					;
				}
				else
				{
					m--;
					++turn;
				}
			}
		}
		if(turn%2 == 0)
		{
			cout<<"Rich"<<endl;
		}
		else
		{
			cout<<"Ari"<<endl;
		}
		
		
	}
}
