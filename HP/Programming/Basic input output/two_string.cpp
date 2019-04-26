#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int flag = 0;
		string str1;
		string str2;
		cin>>str1;
		cin>>str2;
		int len1 = str1.length();
		int len2 = str2.length();
		for(int i=0; i<len1; i++)
		{
			for(int j=0; j<len2; j++)
			{
				if(str1[i] == str2[j])
				{
					str2[j] = str2[len2-1];
					len2=len2-1;
					break;
				}
				else if(j==len2-1)
				{
					flag = 1;
					
				}
			}
			if(flag == 1)
			{
				cout<<"NO"<<endl;
				break;
			}
		}
		if(flag == 0)
		{
			cout<<"YES"<<endl;
		}
		

		
	}
}
