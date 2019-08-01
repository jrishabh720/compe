#include<iostream>

using namespace std;

int main()
{
	string str;
	cin>>str;
	int len = str.length();
	for(int i=0; i<len; i++)
	{
		if((str[i]-0)>=97)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			str[i] = str[i] + 32;
			
		}
	
	}
	cout<<str;
}
