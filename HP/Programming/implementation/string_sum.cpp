#include<iostream>

using namespace std;

int main()
{
	string str;
	cin>>str;
	int len = str.length();
	int sum = 0;
	for(int i=0; i<len; i++)
	{
		sum+=str[i]-96;
		
	}
	cout<<sum;
}
