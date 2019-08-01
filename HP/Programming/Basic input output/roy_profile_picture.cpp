#include<iostream>

using namespace std;

int main()
{
	int l;
	int n;
	cin>>l;
	cin>>n;
	while(n--)
	{
		int w,h;
		cin>>w>>h;
		if(w<l || h<l)
		{
			cout<<"UPLOAD ANOTHER";
			
		}
		else if(w>=l || h>=l)
		{
			if(w==h)
			{
				cout<<"ACCEPTED";
			}
			else
			{
				cout<<"CROP IT"; 
			}
		}
		cout<<"\n";
	}
	
}
