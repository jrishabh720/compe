#include<iostream>

using namespace std;

int main()
{
	int a=0;
	int b=0;
	string str;
	cin>>str;
	int len = str.length();
	for(int i=0; i<len; i++)
	{
		if(str[i] == 'L')
		{
			a=a-1;
		}
		if(str[i] == 'R')
		{
			a=a+1;
		}
		if(str[i] == 'U')
		{
			b=b+1;
		}
		if(str[i] == 'D')
		{
			b=b-1;
		}
	}
	cout<<a<<" "<<b;
}
