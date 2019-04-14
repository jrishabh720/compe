#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int temp;
	for(int i=2; i<=n; i++)
	{
		temp =1;
		for(int j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				temp = 0;
			}
		}
		if(temp == 1)
		{
			cout<<i<<endl;
		}
		
	}
}
