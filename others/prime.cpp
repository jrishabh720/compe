#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int m;
    cin>>m;
	int n;
	cin>>n;
	int temp;
	for(int i=m; i<=n; i++)
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
			cout<<i;
			printf(" %c",i);
			cout<<endl;
		}

	}
}
