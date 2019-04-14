#include<iostream>
#include<map>

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
		map<char, int> str1;
		for(int i=0; i<len; i++)
		{
			str1[str[i]]++;
			if(str1[str[i]] == 1)
            {
                cout<<str[i];
            }
		}

		cout<<"\n";
	}
}
