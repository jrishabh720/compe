#include<iostream>

using namespace std;

int main()
{
	string str1;
	cin>>str1;
	int len = str1.length();
	int flag = 0;
	for(int i=0; i<len/2; i++)
	{
		if(str1[i] != str1[len-i-1])
		{
			flag = 1;
		}
	}
	if(flag)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
}
