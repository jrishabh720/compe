#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int len = str.length();

	int sum = 0;
	if(len !=10)
	{
		cout<<"Illegal ISBN";
	}
	else
	{
		for(int i=0; i<len; i++)
		{
			int val = str[i] - '0';
			
			sum += (i+1)*val;
		
		}
		
		if(sum%11 == 0)
		{
			cout<<"Legal ISBN";
		}
		else
		{
			cout<<"Illegal ISBN";
		}
		
	}
}
