//pawan jain


#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string str;
	cin>>str;
	
	vector<char> str1;
	
	int l=str.length();

	str1.push_back(str[0]);
	for(int i=1; i<l; i++)
	{
		if(str[i] != str[i-1])
		{
			str1.push_back(str[i]);
		}
	}
	for(int j=0; j<str1.size(); j++)
	{
		cout<<str1[j];
	}
	cout<<endl;
	
}
