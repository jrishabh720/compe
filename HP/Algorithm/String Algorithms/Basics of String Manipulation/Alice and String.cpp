#include<iostream>
using namespace std;

//	string str1;
//	string str2;
//	cin>>str1;
//	cin>>str2;
//	int len1 = str1.length();
//	int len2 = str2.length();
//	if(len1 != len2)
//	{
//		cout<<"NO"<<endl;
//	}
//	else
//	{
//		for(int i=0; i<len1; i++)
//		{
//			if
//		}
//	}
    int main()
{
string s1;
string s2;
int count=0;
cin>>s1;
cin>>s2;
for(int i=0;s1[i]!='\0';i++)
{
if(s2[i]-96<s1[i]-96)
count++;
}
if(count==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}

