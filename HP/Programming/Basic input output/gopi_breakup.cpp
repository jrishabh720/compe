#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int skill;
	cin>>skill;
	int arr[t];
	for(int i=0; i<t; i++)
	{
		cin>>arr[i];
		if(arr[i]>=skill)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
