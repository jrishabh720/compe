#include<iostream>
using namespace std;
static int c=0;

long int fact(int n){
    if(n>0)
	{
		c++;
		if(n==1)
		{
			
			return 1;
		}
		else
		{
			return (n * fact(n-1));
		}
	}
}
int main()
{
	long int fact(int n);
	int n;
	cin>>n;
	
	long int res = fact(n);
	cout<<res<<endl;
	cout<<c;
		

}
