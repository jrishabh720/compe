#include<iostream>
#include<Vector>
#include <bits/stdc++.h> 
using namespace std;

int func(vector<int> vec, int num,int n, int count)
{
	int isPrime;
	for(int i=2; i<=num; i++)
    {
        if(num%i==0) 
        {
             isPrime = 1;
            for(int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1)
            {
                vec.push_back(i);
            }
            
        }
    }
    if(vec.size() == n)
    {
    	count++;
	}
    return 0;
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		static int count=0;
		int a,b,n;
		cin>>a>>b>>n;
		for(int i=a; i<=b; i++)
		{
			vector<int> vec;
			func(vec,i,n, count);
			cout<<count;
		}
	}
}
