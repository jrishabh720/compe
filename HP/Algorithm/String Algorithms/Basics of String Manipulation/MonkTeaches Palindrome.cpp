#include<iostream>

using namespace std;

int palindrome(string str, int len)
{
	int flag = 1;
	
	for(int i=0; i<(len/2); i++)
	{
		if(str[i] != str[len-i-1])
		{
			flag = 0;
			break;
		}
	}
	return flag;
	
}

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		string str;
		cin>>str;
		int len = str.length();
		int pal = palindrome(str, len);
		if(pal==0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES ";
			if(len%2==0)
			{
				cout<<"EVEN";
			}
			else
			{
				cout<<"ODD";
			}
			cout<<"\n";
		}
		
	}
}
