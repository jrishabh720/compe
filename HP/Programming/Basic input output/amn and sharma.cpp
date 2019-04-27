#include<iostream>

using namespace std;

int main()
{
	int toffee = 0;
	int d;
	cin>>d;
	while(d--)
	{
		int r,x;
		cin>>r>>x;
		double run = (44*r)/7;
		double dist = 100*x;
	
		if(dist>=run)
		{
			++toffee;
		}
		
	}
	cout<<toffee;
}
