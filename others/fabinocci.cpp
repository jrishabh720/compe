#include<iostream>

using namespace std;

long int fun(int n)
    {
    	if(n==0 || n==1)
    	{
    		return 1;
		}
		return (fun(n-1) + fun(n-1));
	};

int main()
{
	int n;
	cin>>n;
	
    long int fun(int n);
	long int c = fun(n);
	
	cout<<c<<endl;
	
}
