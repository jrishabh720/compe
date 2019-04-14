#include<iostream>

using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		string str;
		cin>>str;
		int len = str.length();
		int count =0;
		for(int i=0; i<len; i++)
		{
			if(str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' )
			{
				count=count+1;
			}
		}
		cout<<count<<endl;
		
		
	}
}
