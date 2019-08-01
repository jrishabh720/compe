#include<iostream>
using namespace std;

int tell(int n)
{
	int i=1;
	int j=1;
	
	while(n>=0)
	{
		if(i%2 !=0)
		{
			n=n-j;
			i++;
			
		}
		else
		{
			n=n-(2*j);
			i++;
			j++;
		}
		
		
	}
	return i;
}
int main()
{
	int n;
	cin>>n;
	int t = tell(n);
	if(t%2 != 0)
	{
		cout<<"Motu";
	}
	else
	{
		cout<<"Patlu";
	}
}
