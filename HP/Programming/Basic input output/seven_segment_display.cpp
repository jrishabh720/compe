#include<iostream>

using namespace std;

int main()
{
	int arr[] = {6,2,5,5,4,5,6,3,7,6};
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int len = str.length();
		int sum = 0;
		for(int i=0; i<len; i++)
		{
			sum += arr[str[i]-'0'];
		}
		if(sum%2==0)
		{
			int num = sum/2;
			while(num--)
			{
				cout<<"1";
			}
		}
		else
		{
			int num = sum/2;
			cout<<"7";
			while(num>1)
			{
				cout<<"1";
				num--;
			}
			
			
		}
		cout<<"\n";
	}
}

