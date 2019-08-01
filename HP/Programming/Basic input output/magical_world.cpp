#include<iostream>
using namespace std;

bool isPrime(int n)
{
	int flag = 0;
	for(int i=2; i<n/2; i++)
	{
		if(n%i == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}


int main()
{
	int arr[] ={67, 71, 73, 79, 83, 89,97, 101, 103, 107, 109, 113};
	int n;
	cin>>n;
	while(n--)
	{
		int num;
		cin>>num;
		string str;
		cin>>str;
		int len = str.length();
		for(int i=0; i<len; i++)
		{
			int val = str[i];
			
			int checkPrime = isPrime(val);
			
			if(checkPrime == 0)
			{
				for(int j=0; j<12; j++)
				{
				
					if(val<arr[j])
					{
						int val1 = arr[j]-val;
						int val2 = val - arr[j-1];
						if(val1<val2)
						{
							str[i] = (char)arr[j];
							break;
						}
						else if(val1>val2 || val1==val2)
						{
							str[i] = (char)arr[j-1];
							break;
							
						}
					}
					else if(val==90)
					{
						str[i] = 'Y';
					}
					else if(val>113)
					{
						str[i] = 'q';
					}
				}
			
			}
		}
		cout<<str<<endl;
		
	}
	
}
