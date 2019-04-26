#include<iostream>

using namespace std;

int main()
{
	string str;
	cin>>str;
	int n;
	cin>>n;
	for(int i=0; i<str.length(); i++)
	{
		if((str[i]>='0' && str[i]<='9') || (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			int j=0;
			while(j<n){
				j++;
				str[i]++;
				if(str[i]==58) str[i]=48;
				if(str[i]==91) str[i]=65;
				if(str[i]==123) str[i]=97;
			}
		}
		
		cout<<str[i];
		
	}
		
}
	

