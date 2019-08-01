#include<iostream>
#include<bits/stdc++.h>
#include <string.h> 
#include<set>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
//		set<string> list_str;
		string temp;
		cin>>temp;
		long long count = 0;

		long len = temp.length();
//		int len2 = len;
//		for(int i=0; i<len; i++)
//		{
//			for(int j=1; j<=len2; j++)
//			{
//				string str1 = str.substr(i,j);
//				list_str.insert(str1);
//				cout<<i<<" "<<j<<" "<<str1<<endl;
//			}
//			len2--;
//			
//		}
//		set<string> :: iterator it;
//		for(it = list_str.begin(); it!=list_str.end(); it++)
//		{
////			cout<<*it<<endl;
//			string temp = *it;
//			int len3 = temp.length();
//			for(int i=0; i<len3; i++)
//			{
//				if(temp[i]== 'a' || temp[i]== 'i' || temp[i]== 'e' || temp[i]== 'o' || temp[i]== 'u' || temp[i]== 'A' || temp[i]== 'E' || temp[i]== 'I' || temp[i]== 'O' || temp[i]== 'U')
//				{
//					++count;
//				}
//			}
//		}
        for(long i=len-1; i>0; i--)
        {
        	if(temp[i]== 'a' || temp[i]== 'i' || temp[i]== 'e' || temp[i]== 'o' || temp[i]== 'u' || temp[i]== 'A' || temp[i]== 'E' || temp[i]== 'I' || temp[i]== 'O' || temp[i]== 'U')
        	{
        		count += (len-i)*(i+1);
			}
        	
		}
		cout<<count<<endl;;
			
	}
}
