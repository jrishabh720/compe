#include<iostream>
#include<vector>
using namespace std;

int main()
{
	string str;
	cin>>str;

	int len = str.length();
	if(str[2] == 'A' || str[2] == 'E' || str[2] == 'I' || str[2] == 'O' || str[2] == 'U' || str[2] == 'Y')
	{
		cout<<"invalid";
	}
	else
	{
		for(int i=0; i<len-1; i++)
		{
			if(i==1 || i==5)
			{
				i+=2;
			}
			
			int sum = str[i]-'0' + str[i+1]-'0';
			if(sum%2 != 0)
			{
				cout<<"invalid";
				break;
			}
			else if(i==len-2)
			{
				cout<<"valid";
			
			}
		}
	}
}
